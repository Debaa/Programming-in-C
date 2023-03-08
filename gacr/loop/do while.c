/* Write a program to find the sum of first n numbers using the do while loop */

#include <stdio.h>
void main( )
{
    int num, sum=0, i;

    printf("\n Enter the number : ");
    scanf("%d", &num);

    i=1;
    do
    {
        sum = sum + i;
        i++;
    } while (i <= num);
    
    printf("\n The sum of first %d numbers is %d",num, sum);
}