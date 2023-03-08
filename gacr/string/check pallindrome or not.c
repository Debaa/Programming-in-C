// Write a program to check a given string is palindrome or not.

#include <stdio.h>

void main( )
{
    char arr[20], rev[20];
    int i, j, length=0, flag=0;

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

    for(i=0; arr[i] != '\0'; i++)
    {
        if( arr[i] != rev[i] )
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("\n The string '%s' is palindrome.", arr);
    else 
        printf("\n The string '%s' is not a palindrome.", arr);

}