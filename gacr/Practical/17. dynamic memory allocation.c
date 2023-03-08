/* 17. Write a program to find sum and average of n elements entered by the user. 
To write this program, allocate memory dynamically using malloc( ) / calloc( ) functions.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,i, sum=0;
    int* ptr;
    float average;

    printf("\n Enter the number of elements : ");
    scanf("%d", &n);

    ptr = (int*) malloc(n* sizeof(int));
    //ptr = (int*) calloc(n, sizeof(int));
    
    printf("\n Enter %d elments : ", n);
    for(i=0; i<n; i++)
        scanf("%d", ptr+i);


    for(i=0; i<n; i++)
        sum = sum+ *(ptr+i);

    average = (float)sum /n;

    printf("\n Sum = %d", sum);
    printf("\n Avarage = %.3f", average);

}