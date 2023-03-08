/* 8. Write a function to find whether a given no. is prime or not. 
Use the same to generate the prime numbers less than 100.*/

#include <stdio.h>
int isPrime(int num);

void main( )
{
    int num;
    printf("\n Enter a number : ");
    scanf("%d", &num);

    if(isPrime(num))
        printf("\n %d is prime.", num);
    else 
        printf("\n %d is not prime.", num);


    printf("\n The prime numbers less than 100 are : ");
    for(int i=1; i<100; i++)
    {
        if(isPrime(i))
            printf(" %d", i);
    }
}

int isPrime(int num)
{
    int i,count=0;
    for(i = 1; i<=num ; i++)
    {
        if(num%i==0)
            count++;
    }

    if(count == 2)
        return 1;  // Prime
    else
        return 0;  // Not Prime
    
}
