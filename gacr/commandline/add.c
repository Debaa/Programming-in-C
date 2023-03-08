/* a. Write a Program to add two numbers entered as command line arguments */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        printf("\n Enter Three arguments.");
        return 1;
    }

    int num1,num2,sum;
    num1 = atoi(argv[1]);//atoi() gives integer from string(input)
    num2 = atoi(argv[2]);    
    
    sum = num1 + num2;
    
    printf("%d", sum );

    return 0;
}
