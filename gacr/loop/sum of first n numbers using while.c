// Write a program to find the sum of first n numbers using while loop

#include <stdio.h>
void main( )
{
    int num, sum=0, i;

    printf("\n Enter the number : ");
    scanf("%d", &num);

    i=1;
    while(i <= num)
    {
        sum = sum + i;
        i++;
    }
    
    printf("\n The sum of first %d numbers is %d",num, sum);
}