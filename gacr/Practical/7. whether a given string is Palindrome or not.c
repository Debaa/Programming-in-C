/* 7. Write a function that checks whether a given string is Palindrome or not. 
Use this function to find whether the string entered by user is Palindrome or not.*/

#include <stdio.h>

int isPalindrome(char str[]);

void main( )
{
    char str[20];
    printf("\n Enter a String : ");
    scanf("%s", str);

    if(isPalindrome(str))
        printf("\n The string ‘%s’ is a palindrome.", str);
    else 
        printf("\n The string ‘%s’ is not a palindrome.", str);
}

int isPalindrome(char str[])
{
    int  i,j,length=0;
    char rev[20];

    // Finding Length of the string
    for(i=0; str[i] != '\0'; i++);
    length = i;

    // Finding Reverse of the string
    i=0;
    for(j=length-1; j>-1 ; j--)
    {
        rev[i] = str[j];
        i++;
    }
    rev[i]='\0';

    // Comparing both
    for(i=0; str[i] != '\0'; i++)
    {
        if( str[i] != rev[i] )
            return 0;             // Do not Match, Returning 0
    }


    return 1; // Passed previous for loop so, both Matched
}