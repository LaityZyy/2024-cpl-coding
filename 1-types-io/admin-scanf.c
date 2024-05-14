//
// Created by laity on 2024/5/14.
//

#include <ctype.h>
#include <stdio.h>
#include <math.h>

int main() {
    char first_name[10];
    char last_name[10];

    char gender;

    int birth_year;
    int birth_month;
    int birth_day;

    char weekday[10];

    int c_score;
    int music_score;
    int medicine_score;

    double mean;
    double sd;
    int rank;

    scanf("%9s%9s %c", first_name, last_name, &gender);
    scanf("%d%d%d", &birth_year, &birth_month, &birth_day);
    scanf("%9s", weekday);
    scanf("%d%d%d", &c_score, &music_score, &medicine_score);
    scanf("%lf%lf %d%%", &mean, &sd, &rank);

    printf("%s \t %s \t %c\n", first_name, last_name, toupper(gender));
    printf("%.2d-%.2d-%d \t %.3s\n", birth_month, birth_day, birth_year, weekday);
    printf("%d \t %d \t %d\n", c_score, music_score, medicine_score);
    printf("%.1lf \t %.2lf \t %d%%\n", mean, sd, rank);

    return 0;
}
