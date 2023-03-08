// Write a program to sort elements of an array in descending order.

#include <stdio.h>
void main()
{
    int arr[11],i,j, temp;
    printf("\n Enter 10 numbers :");
    for(i=0;i<11;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //To sort
    for(j=1;j<11;j++)  // will run 9 times
    {
        for(i=0;i<10;i++)
        {
            if(arr[i]<arr[i+1])     // to swap
            {
                temp = arr[i];       
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    
    // display
    printf("\n In descending order the numbers are :");
    for(i=0;i<11;i++)
    {
        printf(" %d",arr[i]);
    }
}