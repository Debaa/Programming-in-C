/* Write a program to check whether the entered letter is vowel or consonant */

#include <stdio.h>
void main( )
{
    char ch;
    printf("\n Enter a Letter in lower case : ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("\n '%c' is a vowel.", ch);
                break;
        default:printf("\n '%c' is a consonant.", ch);
                break;
    }
    
}