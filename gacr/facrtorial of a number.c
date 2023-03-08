// Write a program to find the factorial of a number.

#include <stdio.h>
void main( )
{
    int num, fact=1;
    int i;
    printf("\n Enter a number : ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        fact = fact * i;
    }

    printf("\n %d! = %d", num, fact);

}