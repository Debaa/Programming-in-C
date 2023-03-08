// Write a program to find the summation, subtraction, multiplication, division of two variables using a switch case.

#include <stdio.h>
void main( )
{
    int num1, num2, sum, sub, mul;
    float div;
    int choice;
    printf("\n Enter two numbers : ");
    scanf("%d%d", &num1, &num2);

    printf("\n Enter choice 1:Addition, 2:Subtraction, 3:Multiplication 4:Division :");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: sum = num1 +num2;
                printf("\n Summation is %d", sum);
                break;
        case 2: sub = num1 - num2;
                printf("\n Subtraction is %d", sub);
                break;
        case 3: mul = num1 * num2;
                printf("\n Multiplication is %d", mul);
                break;
        case 4: div = (float) num1 / num2;
                printf("\n Division is %f", div);
                break;
        default:
                printf("\n Wrong Choice");
                break;
    }
}