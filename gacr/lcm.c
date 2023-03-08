// Write a program to find lcm of two numbers

#include <stdio.h>
void main()
{
    int num1, num2, lcm;
    int i;
    printf("\n Enter two numbers : ");
    scanf("%d%d", &num1, &num2);

    for(i=1; i<=(num1*num2); i++)
    {
        if((i % num1 == 0) && (i % num2 == 0))
        {
            lcm = i;
            break;
        }
    }

    printf("\n LCM = %d", lcm);
}