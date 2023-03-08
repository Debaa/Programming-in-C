// Write a program to show functions to handle strings.

#include <stdio.h>
#include <string.h>
void main( )
{
    char s1[20],s2[20],s3[20];

    printf("\n Enter First String : ");
    scanf("%s", s1);
    printf("\n Enter Second String : ");
    scanf("%s", s2);
    
    printf("\n s1=%s",s1);
    printf("\n s2=%s",s2);
    printf("\n s3=");

    strcpy(s3,s2);
    printf("\n strcpy(s3,s2)| s3=%s",s3);

    strcat(s1,s2);
    printf("\n strcat(s1,s2)| s1=%s",s1);

    printf("\n strlen(s1)   | The length of s1 is %d",strlen(s1));

    printf("\n strcmp(s1,s2)| It gives %d",strcmp(s1,s2));
    printf("\n strcmp(s2,s3)| It gives %d",strcmp(s2,s3));

} 