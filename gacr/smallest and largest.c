// Write a program to find the smallest and largest element in an array.
#include <stdio.h>
void main( )
{
    int arr[5],largest,smallest;
    int i;
    printf("\n Enter 5 elements : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    largest = arr[0];
    smallest = arr[0];

    for(i=1;i<5;i++)
    {
        if(arr[i] > largest)
        {
            largest= arr[i];
        }
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    printf("\n Largest = %d",largest);
    printf("\n Smallest= %d", smallest);
}