/* 14. Write a program that swaps two numbers using pointers. */

#include <stdio.h>
void main()
{
    int num1, num2, temp, *p, *q;
    printf("\n Enter two numbers : ");
    scanf("%d%d",&num1, &num2);

    p = &num1;
    q = &num2;

    temp = *p;
    *p = *q;
    *q = temp;

    printf("\n After swapping the numbers are %d and %d .", num1, num2);
    
}