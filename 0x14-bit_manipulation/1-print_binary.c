#include <stdio.h>

void print_binary(unsigned long int n) {
    int shift = 0, check_zero = 1, bits;
    unsigned long int save;

    shift = sizeof(n) * 8 - 1;
    while (shift >= 0) {
        save = 1UL << shift;
        bits = (n & save) ? 1 : 0;

        if (bits || !check_zero) {
            putchar('0' + bits);
            check_zero = 0;
        }

        shift--;
    }

    if (check_zero) {
        putchar('0');
    }
}
