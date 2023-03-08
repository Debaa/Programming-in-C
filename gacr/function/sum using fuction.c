// Write a program to find the sum of digits of a number using function.

#include <stdio.h>

void input(void);
void compute(void);
int num;

void main( )
{
    input();
    compute();
}

void input()
{
    printf("\n Enter a number : ");
    scanf("%d", &num);
}

void compute()
{
    int d, sum=0;
    while(num>0)
    {
        d=num%10;
        sum = sum + d;
        num = num/10 ;
    }
    printf("\n Sum = %d", sum);
}