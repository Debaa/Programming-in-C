// Write a program to find the sum of digits of a number.

#include <stdio.h>
void main( )
{
    int num, sum=0;
    int d;
    
    printf("\n Enter a number : ");
    scanf("%d", &num);
    
    while(num>0)
    {
        d=num%10;
        sum = sum + d;
        num = num/10 ;
    }
    
    printf("\n Sum = %d", sum);
}