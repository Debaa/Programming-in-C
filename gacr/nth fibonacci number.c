// write a program to find the nth number in fibonacci series

#include <stdio.h>
int fib(int);

void main( )
{
    int n;
    printf("\n Enter the number : ");
    scanf("%d", &n);

    printf("\n fibonacci number of term %d is %d", n, fib(n));
}

int fib(int n)
{ 
    int f[n];
    f[0]=0;
    f[1]=1;

    int i;
    for(i=2;i<=n;i++)
    {
       // f[i]= 
    }
}