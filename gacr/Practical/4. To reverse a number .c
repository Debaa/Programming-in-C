/* 4. Write a Program to reverse a number.*/

#include <stdio.h>
void main( )
{
    int num, rev=0, r;
    
    printf("\n Enter a number : ");
    scanf("%d", &num);

    while(num >0)
    {
        r = num % 10;
        rev = (rev * 10) + r;
        num = num/10;
    }

    printf("\n The reversed number is %d", rev);
    
}
