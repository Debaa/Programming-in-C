// Write a program to swap the values of two variables without using a third variable

#include <stdio.h>
void main( )
{
    int num1, num2;
    printf("\n Enter two numbers : ");
    scanf("%d%d", &num1, &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\n After swapping num1 = %d and num2 = %d", num1, num2);
}