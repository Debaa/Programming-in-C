// Write a program to count the number of each of the vowel and in a sentence. (and consonant and symbol)

#include <stdio.h>
void main( )
{
    char str[100];
    int j;
    int a=0, e=0, i=0, o=0, u=0;
    int cons=0;

    printf("\n Enter a sentence : ");
    scanf("%[^\n]",str);

    for(j=0; str[j]!='\0'; j++)
    {
        if(str[j] == 'a' || str[j] == 'A') a++;
        else if(str[j] == 'e' || str[j] == 'E') e++;
        else if(str[j] == 'i' || str[j] == 'I') i++;
        else if(str[j] == 'o' || str[j] == 'O') o++;
        else if(str[j] == 'u' || str[j] == 'U') u++;
        
        else if(str[j] == 'b'|| str[j] == 'B'||
                str[j] == 'c'|| str[j] == 'C'||
                str[j] == 'd'|| str[j] == 'D'||
                str[j] == 'f'|| str[j] == 'F'||
                str[j] == 'g'|| str[j] == 'G'||
                str[j] == 'h'|| str[j] == 'H'||
                str[j] == 'j'|| str[j] == 'J'||
                str[j] == 'k'|| str[j] == 'K'||
                str[j] == 'l'|| str[j] == 'L'||
                str[j] == 'm'|| str[j] == 'M'||
                str[j] == 'n'|| str[j] == 'N'||
                str[j] == 'p'|| str[j] == 'P'||
                str[j] == 'q'|| str[j] == 'Q'||
                str[j] == 'r'|| str[j] == 'R'||
                str[j] == 's'|| str[j] == 'S'||
                str[j] == 't'|| str[j] == 'T'||
                str[j] == 'v'|| str[j] == 'V'||
                str[j] == 'w'|| str[j] == 'W'||
                str[j] == 'x'|| str[j] == 'X'||
                str[j] == 'y'|| str[j] == 'Y'||
                str[j] == 'z'|| str[j] == 'Z') cons++;
        
    }

    printf("\n No of 'A' = %d", a);
    printf("\n No of 'E' = %d", e);
    printf("\n No of 'I' = %d", i);
    printf("\n No of 'O' = %d", o);
    printf("\n No of 'U' = %d", u);
    printf("\n No of Consonants = %d", cons);
}
