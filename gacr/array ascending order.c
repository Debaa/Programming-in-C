// Write a program to sort elements of an array in ascending order.

#include <stdio.h>
void main()
{
    int arr[10],i,j, temp;
    printf("\n enter 10 numbers :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //To sort
    for(j=1;j<10;j++)
    {
        for(i=0;i<9;i++)
        {
            if(arr[i]>arr[i+1])     // to swap
            {
                temp = arr[i];       
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    
    // display
    printf("\n In ascending order the numbers are :");
    for(i=0;i<10;i++)
    {
        printf(" %d",arr[i]);
    }
}