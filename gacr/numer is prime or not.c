// Write a program to check whether a number is prime or not

#include <stdio.h>
void main( )
{
    int num, i, count=0;
    printf("\n Enter a number : ");
    scanf("%d", &num);

    for(i = 1; i<=num ; i++)
    {
        if(num%i==0)
        {
            count =count + 1;
            
        }
    }

    if(count == 2)
    {
        printf("\n %d is a prime number.", num);
    }
    else
    {
        printf("\n %d is not a prime number.", num);
    }
        
}