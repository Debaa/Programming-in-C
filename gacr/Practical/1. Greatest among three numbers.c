/* 1. Write a Program to find greatest among three numbers.*/

#include <stdio.h>
void main( )
{
    int num1, num2, num3;
    int largest;
    printf("\n Enter three numbers : ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if(num1 > num2)
    {
        if(num1 > num3)
        {
            largest = num1;
        }
        else
            largest = num3;
    }
    else
    {
        if(num2 > num3)
        {
            largest = num2;
        }
        else 
            largest = num3;
    }

    printf("\n Largest number is %d", largest);

}
