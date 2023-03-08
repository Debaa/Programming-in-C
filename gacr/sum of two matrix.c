// Write a program to find the sum of two matrices.

#include <stdio.h>
void main( )
{
    int mat1[3][3],mat2[3][3],mat3[3][3];
    int i,j;
    printf("\n Enter the values of First matrix : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\n Enter the values of Second matrix: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("\n The addition of given two matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("  %d", mat3[i][j]);
        }
        printf("\n");
    }
}
