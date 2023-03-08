//Write a program to store 10 integer value in an array and find their sum.
#include <stdio.h>
void main( )
{
    int arr[10], sum=0;
    int i;
    printf("\n Enter 10 Numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }

    printf("\n The sum of numbers is %d.",sum);
}