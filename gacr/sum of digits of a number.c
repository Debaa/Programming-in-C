// Write a program to find the sum of digits of a number.

#include <stdio.h>
void main( )
{
    int num, r, sum=0;
    printf("\n Enter a number : ");
    scanf("%d", &num);

    while(num > 0)
    {
        r = num % 10;
        sum = sum +r;
        num = num/10;
    }

    printf("\n The sum of digits is %d", sum);
}