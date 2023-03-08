// Write a program to count the number of each of the vowel and in a sentence. (and consonant and symbol)
// Using array
#include <stdio.h>
void main( )
{
    char str[100];
    int j;
    int a=0, e=0, i=0, o=0, u=0;
    int cons_count=0;

    char cons[42]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z',
    'B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z'};

    printf("\n Enter a Sentence : ");
    scanf("%[^\n]",str);

    for(j=0; str[j]!='\0'; j++)
    {
        if(str[j] == 'a' || str[j] == 'A') a++;
        else if(str[j] == 'e' || str[j] == 'E') e++;
        else if(str[j] == 'i' || str[j] == 'I') i++;
        else if(str[j] == 'o' || str[j] == 'O') o++;
        else if(str[j] == 'u' || str[j] == 'U') u++;

        else
        {
            for(int k=0; k<42; k++)
                if(str[j] == cons[k]) cons_count++;
        }
    }


    printf("\n No of 'A' = %d", a);
    printf("\n No of 'E' = %d", e);
    printf("\n No of 'I' = %d", i);
    printf("\n No of 'O' = %d", o);
    printf("\n No of 'U' = %d", u);
    printf("\n No of Consonants = %d", cons_count);
}
