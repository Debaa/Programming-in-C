// Write a program using 'if statement'

#include <stdio.h>
void main( )
{
    int mark1, mark2, mark3, total_mark;
    char ncc;
    
    printf("\n Do you have NCC? y/n : ");
    scanf("%c", &ncc);
    
    printf("\n Enter the marks of three subjects : ");
    scanf("%d%d%d", &mark1, &mark2, &mark3);

    total_mark = mark1 + mark2 +mark3;

    if(ncc=='y')
    {
        total_mark = total_mark + 5;
        printf("\n Extra 5 marks added for NCC.");
    }

    printf("\n The total mark is %d", total_mark);
}