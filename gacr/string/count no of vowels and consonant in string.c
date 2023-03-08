// Write a program to count the number of each of the vowel and in a sentence. (and consonant and symbol)

#include <stdio.h>
void main( )
{
    char str[100];
    int j;
    int a=0, e=0, i=0, o=0, u=0;
    int space=0, count_cons, total=0;

    printf("\n Enter a sentence : ");
    scanf("%[^\n]",str);

    for(j=0; str[j]!='\0'; j++)
    {
        if(str[j] == 'a' || str[j] == 'A') a++;
        else if(str[j] == 'e' || str[j] == 'E') e++;
        else if(str[j] == 'i' || str[j] == 'I') i++;
        else if(str[j] == 'o' || str[j] == 'O') o++;
        else if(str[j] == 'u' || str[j] == 'U') u++;
        
        else if(str[j] == ' ') space++;
        total++;
    }

    count_cons = total - (a+e+i+o+u) - space;

    printf("\n No of 'A' = %d", a);
    printf("\n No of 'E' = %d", e);
    printf("\n No of 'I' = %d", i);
    printf("\n No of 'O' = %d", o);
    printf("\n No of 'U' = %d", u);
    
    printf("\n No of Consonants and Symbols = %d", count_cons);
}
