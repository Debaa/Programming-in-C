// Write a program to find the sum of first n numbers using the for loop

#include <stdio.h>
void main( )
{
    int num, sum=0, i;

    printf("\n Enter the number :");
    scanf("%d", &num);

    for(i=1; i<=num ; i++)
    {
        sum = sum + i;
    }
    printf("\n The sum of first %d numbers is %d",num, sum);
}