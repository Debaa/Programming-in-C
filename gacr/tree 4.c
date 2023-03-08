/* Write a program to print this patern :
    *
   * *
  * * *
 * * * *
* * * * *
*/

#include <stdio.h>
void main()
{
    int i, j;
    for(i = 1; i<=5; i++)
    {
        for(j = 1; j<=i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}
// TODO