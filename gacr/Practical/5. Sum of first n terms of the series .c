/* 5. Write a Program to compute the sum of the first n terms of the following series
S = 1 + 1/2 + 1/3 + 1/4 +……
*/

#include <stdio.h>
void main()
{
    int n;
    float sum=0;

    printf("\n Enter a number: ");
    scanf("%d", &n);

    for(int i=1; i<=n ; i++)
    {
        sum = sum + (float) 1/i; // (float) 1 or 1.0
    }

    printf("\n Sum = %f", sum);

   
}