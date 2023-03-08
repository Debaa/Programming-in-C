// Write a program to find the factorial of a number using recursion.

#include <stdio.h>

int factorial(int);
void main( )
{
    int num, fact;
    printf("\n Enter a Number : ");
    scanf("%d", &num);

    fact= factorial(num);
    printf("\n Factorial = %d", fact);
}

int factorial(int n)
{
    if(n==0)
        return 1;
    return (n * factorial(n-1));
}