#include<stdio.h>

#define AND &&
#define OR ||

void main()
{
    int a=55;
    if(a>40 AND a<70 OR a ==222)
        printf("\nSuccessful");
    else
        printf("\nNot successful");

}