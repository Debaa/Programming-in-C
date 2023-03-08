// Write a program to demonstrate the use of pointer.

#include<stdio.h>
void main( )
{
    int x,y;
    int *ptr;
    x=10;
    ptr= &x;
    y= *ptr;

    printf("\n Value of x is %d", x);
    
    printf("\n %d is stored in %u", x, &x);
    printf("\n %d is stored in %u", *&x, &x);
    printf("\n %d is stored in %u", *ptr, ptr);
    
    printf("\n %u is stored in %u", ptr, &ptr);
    printf("\n %d is stored in %u", y, &y);
    *ptr=25;
    printf("\n Now x=%d",x);
}