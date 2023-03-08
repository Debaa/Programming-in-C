/* 3. Write a Program to print the sum and product of digits of an integer.*/

#include <stdio.h>
void main( )
{
    int num, r, sum=0 ,product=1;
    printf("\n Enter a number : ");
    scanf("%d", &num);

    while(num > 0)
    {
        r = num % 10;
        sum = sum +r;
        product = product * r;
        num = num/10;
    }

    printf("\n The sum of digits is %d", sum);
    printf("\n The product of digits is %d", product);
}
