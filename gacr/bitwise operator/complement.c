#include<stdio.h>
void main()
{   
    short a = 3; // 00000000   00000011
    short b = 5; // 00000000   00000101

    printf("\n %d", a&b);  // 0001  = 1
    printf("\n %d", a|b);  // 0111  = 7
    printf("\n %d", a^b);  // 0110  = 6

    printf("\n %d", a<<2); // left shift 2 bits  = 1100 = 12
    printf("\n %d", a>>1); // right shift 1 bit  = 0001 = 1

    a=65520; // 11111111 11110000
    printf("\n %d", ~a);  // 1111 = 15
    printf("\n %d", -a);  // 2's complement 1111+1 = 10000 = 16


}