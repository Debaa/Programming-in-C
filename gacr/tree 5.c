/* Write a program to print this pattern
1
* *
3 3 3
* * * *
5 5 5 5 5     */

#include<stdio.h>
void main( )
{
    int i,j;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i%2==0)
                printf(" *");
            else   
                printf(" %d", i);
        }
        printf("\n");
    }
}