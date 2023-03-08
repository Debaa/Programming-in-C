// Write a program to find the sum of elements of an array using pointer.

#include <stdio.h>

void main( )
{
    int x[5] = {5,9,6,3,7};
    int *p, sum=0, i=0;
    i=0;
    p=x;    // p=&x[0]
    sum=0;

    printf("\n Element  Value   Address");
    while(i<5)
    {
        printf("\n x[%d]       %d     %u", i, *p, p);
        sum = sum + *p;
        i++;
        p++;
    }
    printf("\n Sum = %d", sum);

}