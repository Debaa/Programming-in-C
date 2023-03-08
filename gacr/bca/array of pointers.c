
#include<stdio.h>

void main()
{
    int *ptr[3];
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    ptr[0]=&arr[0][0];
    ptr[1]=&arr[1][0];
    ptr[2]=&arr[2][0];

    printf(" Addresses:  %u---%u---%u", ptr[0],ptr[1],ptr[2]);

}