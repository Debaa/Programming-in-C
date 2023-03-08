// Write a program to find the transpose of a matrix.

#include <stdio.h>
void main( )
{
    int arr[3][2];
    int arr2[2][3];
    int i,j;
    printf("\n Enter 6 elements : ");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            arr2[j][i]=arr[i][j];
        }
    }

    printf("\n The transpose of the matrix is :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",arr2[i][j]);
        }
        printf("\n");
    }
}