// Write a program to count the number of vowels in a sentence.
#include <stdio.h>
void main( )
{
    char str[100];
    int i;
    int count = 0;

    printf("\n Enter a sentence : ");
    scanf("%[^\n]",str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i] == 'a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' ||
        str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U')
        {
            count++;
        }
    }

    printf("\n No of vowels = %d", count);
}
