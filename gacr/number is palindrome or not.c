// Write a program to check whether a number is palindrome or not.

#include <stdint.h>
void main( )
{
    int num, rev=0, r;
    int temp;
    printf("\n Enter a number : ");
    scanf("%d", &num);
    temp = num;

    while(num >0)
    {
        r = num % 10;
        rev = (rev * 10) + r;
        num = num/10;
    }

    if(temp == rev)
    {
        printf("\n %d is palindrome.", temp);
    }
    else
    {
        printf("\n %d is not a palindrome.", temp);
    }
}