// Write a program to print Fibonacci series

#include <stdio.h>
void main( )
{
    int num;
    int f_term = 0;
    int s_term = 1;
    int next;
    printf("\n Enter the number of term : ");
    scanf("%d", &num);

    if(num == 1)
    {
        printf("\n %d", f_term);
    }
    if(num >= 2)
    {
        printf("\n %d %d", f_term, s_term);
    }
    while(num >=3)
    {
        next = f_term + s_term;
        printf(" %d", next);
        f_term = s_term;
        s_term = next;
        num--;
    }
}
