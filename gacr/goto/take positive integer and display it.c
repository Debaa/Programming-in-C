// Write a program to take a positive integer and display it

#include <stdio.h>
void main( )
{
    int num;

    read:
    printf("\n Enter a positive number : ");
    scanf("%d", &num);

    if(num <= 0)
        goto read;
    
    printf("\n The number is %d", num);

}s