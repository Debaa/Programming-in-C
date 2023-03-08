/* Write a program to find HCF (Highest Common Factor) and LCM (Lowest Common Multiplier) of two numbers. */

#include <stdio.h>
void main()
{
    int num1,num2, hcf, lcm;
    int i;

    printf("\n Enter two numbers : ");
    scanf("%d%d", &num1, &num2);


    for(i=1; i<=num1; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf=i;
        }
    }

    lcm = num1*num2/hcf;
    
    printf("\n HCF = %d", hcf);
    printf("\n LCM = %d", lcm);

}