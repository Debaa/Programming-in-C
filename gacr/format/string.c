#include<stdio.h>
#include<string.h>
void main()
{
    char str[100]="I am Ram";
    int length;
    length = strlen(str);
    printf("\n Length = %d", length);

    strupr(str);
    printf("\n Upper Case = %s", str);
    
    strlwr(str);
    printf("\n Lower Case = %s", str);
    
}