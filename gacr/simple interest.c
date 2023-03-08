// Write a program to find the simple interest

#include <stdio.h>
void main()
{
    int p,t,r;
    float si;
    printf("\n Enter principal amount, time, rate of interest : ");
    scanf("%d%d%d", &p, &t, &r);

    si = (float) (p*t*r)/100;
    printf("\n Simple Interest = %f", si);
}