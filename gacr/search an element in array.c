// Write a program to search an element in an array.
#include <stdio.h>
void main( )
{
    int arr[10];
    int i;
    int key;
    int flag=0;
    printf("\n Enter 10 elements : ");
    for(i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n Enter the element you want to search : ");
    scanf("%d",&key);

    for(i=0;i<10;i++)
    {
        if(key == arr[i])
        {
            flag=1;
            printf("\n The element is present at index %d.",i);
            break;
        }
    }

    if(flag==0)
    {
        printf("\n The element is absent.");
    }
}