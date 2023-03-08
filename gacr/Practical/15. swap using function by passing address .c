/* 15. Write a program in which a function is passed address of two variables 
and then alter its contents.*/

#include <stdio.h>
void swap(int *, int *);

void main( )
{
    int num1, num2;
    printf("\n Enter two Numbers : ");
    scanf("%d%d", &num1, &num2);

    swap(&num1, &num2);

    printf("\n in main :");
    printf("\n num1 = %d", num1);
    printf("\n num2 = %d", num2);
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    
    printf("\n in swap function :");
    printf("\n *a = %d", *a);
    printf("\n *b = %d", *b);
}
