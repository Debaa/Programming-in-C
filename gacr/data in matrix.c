// Write a program to store a data into a matrix and display it.

#include <stdio.h>
void main( )
{
    int arr[3][2];
    int i,j;
    printf("\n Enter 6 elements : ");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\n The Matrix is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
}