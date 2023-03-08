// Write a program to find the largest number between two numbers.

#include <stdio.h>
void main( )
{
    int num1, num2;
    int largest;

    printf("\n Enter two numbers : ");
    scanf("%d%d", &num1, &num2);

    if(num1 > num2)
    {
        largest = num1;
    }
    else
    {
        largest = num2;
    }
    printf("\n The largest number is %d", largest);

}