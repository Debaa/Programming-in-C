/* 11. Write a Program to print a triangle of stars as follows 
(take number of lines from user):
    *
   ***
  *****
 *******
*/

#include <stdio.h>
void main()
{
    int row,j, total_lines;

    printf("\n Enter no of lines : ");
    scanf("%d", &total_lines);

    for(row = 1; row <= total_lines; row++)
    {
        //For printing white space
        for(j=1; j<=total_lines-row ;j++)
            printf(" ");

        //For printing *
        for(j=1; j<= 2*row-1; j++)   
                printf("*");          
                                    
        // Row printed,Going to new line
        printf("\n");
    }   
}

// tips for Pattern programs

// Find relation between Row no and no of star. 
// Here no of star in a row = (2 X row no) -1
// so used j<= 2*row-1 in for loop

// similarly for white space, we have to find relation