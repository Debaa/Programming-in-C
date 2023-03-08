// Write a program to copy one string to another.
#include <stdio.h>
void main( )
{
    char str1[50],str2[50];
    int i;
    printf("Enter a string : ");
    scanf("%s", str1);
    
    for(i=0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }

    printf("\n String 2 is %s", str2);
}