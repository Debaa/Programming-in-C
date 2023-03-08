// Write a program to check whether a number is armstrong or not

#include <stdio.h>
void main( )
{
    int num, r, sum=0;
    int temp;
    printf("\n Enter a number : ");
    scanf("%d", &num);
    temp = num;

    while(num > 0)
    {
        r = num % 10;
        sum = sum + r*r*r;
        num = num/10;
    }
    if(sum == temp)
    {
        printf("\n %d is an armstrong number.", temp);
    }
    else
    {
        printf("\n %d is not an armstrong number.", temp);
    }
    
}