/* 9. Write a Program to compute the factors of a given number.*/

#include <stdio.h>
void main()
{
    int i, num;
    printf("\n Enter a number : ");
    scanf("%d", &num);

    printf("\n Factors are : ");
    for(i=1; i<=num; i++)
    {
        if(num%i == 0)
            printf(" %d", i);
    }
}