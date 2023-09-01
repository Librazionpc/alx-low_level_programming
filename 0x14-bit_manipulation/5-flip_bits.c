#include <stdio.h>

unsigned int flip_bits(unsigned long int n, unsigned long int m) {
    unsigned long int xorResults;
    unsigned int count = 0;

    xorResults = n ^ m;
    while (xorResults) {
        count += xorResults & 1;
        xorResults >>= 1;
    }

    return count;
}