#include<stdio.h>
#define CONDITION(x) (x>=65 && x<=90)
void main()
{
    char ch='c';
    if(CONDITION(ch))
        printf("Successful");
    else   
        printf("Try again");

}