// Write a program to show static variable

#include <stdio.h>
void compute()
{
    int a=0;
    static int b=0;
    printf("\n a=%d, b=%d",a, b);
    a++;
    b++;
}

void main()
{
    compute();
    compute();
    compute();
}