/* 6. Write a Program to compute the sum of the first n terms of the following series
S = 1-2+3-4+5…………….
*/

#include <stdio.h>
void main()
{
    int i, n, sum=0;

    printf("\n Enter a number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            sum = sum - i;
        }
        else{
            sum = sum + i;
        }
    }

    printf("\n Sum is %d", sum);

}