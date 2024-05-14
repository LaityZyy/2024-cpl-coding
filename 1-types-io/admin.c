//
// Created by laity on 2024/5/14.
//

#include <ctype.h>
#include <math.h>
#include <stdio.h>

int main() {
    char first_name[] = "Dayou";
    char last_name[] = "Luo";

    char gender = 'm';

    int birth_year = 1954;
    int birth_month = 7;
    int birth_day = 20;

    char weekday[] = "Tuesday";

    int c_score = 30;
    int music_score = 100;
    int medicine_score = 85;

    double mean = (c_score + music_score + medicine_score) / 3.0;
    double sd = sqrt((pow(c_score - mean, 2) + pow(music_score - mean, 2) +
                       pow(medicine_score - mean, 2)) / 3.0);
    int rank = 5;

    printf("%s \t %s \t %c\n", first_name, last_name, toupper(gender));
    printf("%.2d-%.2d-%d \t %.3s\n", birth_month, birth_day, birth_year, weekday);
    printf("%d \t %d \t %d\n", c_score, music_score, medicine_score);
    printf("%.1lf \t %.2lf \t %d%%\n", mean, sd, rank);

    return 0;
}
