// Write a program to demonstrate switch statement

#include <stdio.h>
void main( )
{
    int sub1, sub2, sub3;
    float avg;
    int gpoint;
    printf("\n Enter Marks of three subjects : ");
    scanf("%d%d%d", &sub1, &sub2, &sub3);
    avg = (float) ((sub1 + sub2 + sub3)/3);
    gpoint = (int) (avg/10);

    switch(gpoint)
    {
        case 10:
        case 9:
        case 8:
        case 7:
        case 6: printf("\n First Class");
                break;
        case 5: printf("\n Second Class");
                break;
        case 4: printf("\n Third Class");
                break;
        default:printf("\n Fail");
                break;
    }
    
}