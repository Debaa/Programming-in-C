// Write a program to find the lenght of string using pointer.
#include <stdio.h>
void main( )
{
    char  *name = "Delhi";
    int length;
    char  *cptr = name;
    while(*cptr != '\0')
    {
        printf("\n %c is stored in %u", *cptr, cptr);
        cptr++;
    }
    length = cptr - name;
    printf("\n Length of the string is %d.", length);
}