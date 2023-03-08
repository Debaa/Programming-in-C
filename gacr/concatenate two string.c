// Write a program to concatenate /merge two strings.

#include <stdio.h>
void main( )
{
    char str1[50],str2[50],str3[100];
    int i,j;
    
    printf("\n Enter String 1: ");
    scanf("%s", str1);
    printf("\n Enter String 2: ");
    scanf("%s", str2);

    for(i=0; str1[i]!='\0'; i++)
    {
        str3[i]=str1[i];
    }

    for(j=0; str2[j]!='\0'; j++)
    {
        str3[i]=str2[j];
        i++;
    }
    str3[i]='\0';

    printf("\n String 3 is %s", str3);
}