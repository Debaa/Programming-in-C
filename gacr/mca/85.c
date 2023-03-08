#include<stdio.h>

#define AVERAGE(a,b,c,d,e) (a+b+c+d+e)/5

void main()
{
    int p=10, q=20, r=30, s=40, t=50, avg;
    avg = AVERAGE(p,q,r,s,t);
    printf("Average = %d", avg);
}