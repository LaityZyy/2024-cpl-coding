//
// Created by laity on 2024/5/14.
//

#include <stdio.h>

int main() {
    const double PI = 3.14159;
    int radius = 10;

    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    printf("radius = %d\n", radius);
    printf("circumference = %.2lf\n", circumference);
    printf("area = %.2lf\n", area);

    return 0;
}
