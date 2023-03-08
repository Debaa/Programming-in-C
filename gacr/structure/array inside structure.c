// Write a program to illustrate array within structure.

// Write a program to show array as a structure member.

// Write a program to find the total mark of a student obtained from three subjects using structure.

#include <stdio.h>

struct student
{
    char name[20];
    int sub1;
    int sub2;
    int sub3;
    int total;
};
void main()
{
    struct student s1;
    printf("\n Enter the name : ");
    scanf("%s", &s1.name);
    printf("\n Enter marks of three subjects : ");
    scanf("%d%d%d", &s1.sub1, &s1.sub2, &s1.sub3);

    s1.total = s1.sub1 + s1.sub2 + s1.sub3;

    printf("\n Total mark obtained by %s is %d .", s1.name, s1.total);
}