//
// Created by laity on 2024/5/14.
//

#include <stdio.h>

int main() {
    const double MOL = 6.02E23;
    const int GRAM_PER_MOL = 32;

    int mass = 6;

    double quantity = mass * 1.0 / GRAM_PER_MOL * MOL;

    printf("quantity = %.3le\n", quantity);
    printf("quantity = %.5lg\n", quantity);

    return 0;
}
