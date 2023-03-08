/* Write a program to find the grade of a student from three subjects.
if(average >= 60) 1st class
if(average >= 50) 2nd class
if(average >= 40) 3rd class
else fail
*/

#include <stdio.h>
void main( )
{
    int sub1, sub2, sub3;
    float avg;
    printf("\n Enter three subjects : ");
    scanf("%d%d%d", &sub1, &sub2, &sub3);

    avg =(float) (sub1 + sub2 + sub3)/3;

    printf("\n Average = %f", avg);
    
    if(avg >= 60)
    {
        printf("\n First Class");
    }
    else if(avg >= 50)
    {
        printf("\n Second Class");
    }
    else if(avg >= 40)
    {
        printf("\n Third Class");
    }
    else
    {
        printf("\n Fail");
    }
        
}