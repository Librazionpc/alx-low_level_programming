#include <stdio.h>

int get_bit(unsigned long int n, unsigned int index)
{
    unsigned int bitNum;
    unsigned long int savedBits;
    int bitAmt;
    
    bitNum = sizeof(unsigned long int) * 8;
    if (index >= bitNum) 
    {
        return -1;
    }
    savedBits = n >> index;
    
    bitAmt = savedBits & 1UL;
    
    return bitAmt;
}