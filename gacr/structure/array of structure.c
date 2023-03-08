// Write a program to represent array of structure.
#include <stdio.h>
struct student
{
    int sub1;
    int sub2;
    int total;
};

void main()
{
    struct student s[3];
    int i;
    printf("\n Enter 6 marks :");
    for(i=0; i<3; i++)
    {
        scanf("%d",&s[i].sub1 );
        scanf("%d",&s[i].sub2 );
    }

    // Calculating Total 
    for(i=0; i<3; i++)
    {
        s[i].total= s[i].sub1 + s[i].sub2;
    }

    printf("\n The total marks are :");
    for(i=0; i<3; i++)
    {
        printf("\n s[%d].total = %d", i, s[i].total);
    }
}