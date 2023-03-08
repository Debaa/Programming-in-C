// Write a program to find the sum of digits of a number using nesting of function.

#include <stdio.h>

void input(void);
void compute(void);
int num;

void main( )
{
    compute();
}

void input()
{
    printf("\n Enter a number : ");
    scanf("%d", &num);
}

void compute()
{
    int r, sum=0;
    input();
    while(num>0)
    {
        r=num%10;
        sum = sum + r;
        num = num/10 ;
    }
    printf("\n Sum = %d", sum);
}