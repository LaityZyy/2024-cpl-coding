//
// Created by laity on 2024/5/13.
//

#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("argc = %d\n", argc);
    printf("argv: ");
    for (int i = 1; i < argc; i++) {
        printf("%d.%s ", i, argv[i]);
    }
    printf("\n");
    return 0;
}
