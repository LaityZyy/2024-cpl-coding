//
// Created by laity on 2024/5/14.
//

#include <stdio.h>

int main() {
    const double PI = 3.14159;
    int radius = 100;

    double surface_area = 4 * PI * radius * radius;
    double volume = 4.0 / 3 * PI * radius * radius * radius;

    printf("%-15.4lf : suface_area\n", surface_area);
    printf("%-15.4lf : volume\n", volume);

    return 0;
}
