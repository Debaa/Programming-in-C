// Write a program to count the number of characters / number of words in a sentence.

#include <stdio.h>
void main( )
{
    char str[100];
    int i;
    int count = 1;

    printf("\n Enter a sentence : ");
    scanf("%[^\n]",str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }

    printf("\n No of Charaters = %d", i);
    printf("\n No of words = %d",count);
}