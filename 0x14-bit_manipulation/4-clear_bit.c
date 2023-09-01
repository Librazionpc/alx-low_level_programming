#include <stdio.h>

int clear_bit(unsigned long int *n, unsigned int index) {
    unsigned int bitNum;
    unsigned long int mask;
    
    bitNum = sizeof(unsigned long int) * 8; 
    if (index >= bitNum) 
    {
        return (-1); 
    }
    mask = ~(1UL << index);
    *n &= mask;
    
    return (1);
}
