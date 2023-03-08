/* 13. Write a Program that prints a table indicating the number of occurrences 
of each alphabet in the text entered as command line arguments.*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int num1,num2,sum;
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    
    sum = num1 + num2;
    
    printf("%d", sum );

    return 1;
}