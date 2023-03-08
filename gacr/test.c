/* Write a program in C using function to swap two numbers 
using global variable concept and call by reference concept*/

#include <stdio.h>
void swap(int *, int *);
int num1, num2;  // Global variables

void main( )
{
    printf("\n Enter two Numbers : ");
    scanf("%d%d", &num1, &num2);
    swap(&num1, &num2);             // Passing Address to swap()
    printf("\n num1 = %d", num1);
    printf("\n num2 = %d", num2);
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}