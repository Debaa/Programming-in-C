// Write a program to reverse a string and find it's length.

#include <stdio.h>

void main( )
{
    char arr[10], rev[10];
    int i, j, length=0;
    printf("\n Enter a String : ");
    scanf("%s", arr);

    for(i=0;arr[i] != '\0'; i++);
    length = i;

    i=0;
    for(j=length-1; j>-1 ; j--)
    {
        rev[i] = arr[j];
        i++;
    }
    rev[i]='\0';

    printf("\n The reverse of the string is :%s", rev);
    printf("\n The length of the string is %d", length);
  
}