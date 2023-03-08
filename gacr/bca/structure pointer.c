#include<stdio.h>
#include<string.h>

struct student 
{
    char name[20];
    int mark;
};

void main()
{
    struct student *st_ptr;
    struct student student1 = {"Ram", 99};
    
    st_ptr = &student1;

    strcpy(student1.name,"Hari");   // Direct assigning does not work for string
    student1.mark = 98;

    // using pointer
    strcpy(st_ptr->name,"Narayan");   // Direct assigning does not work for string
    (*st_ptr).mark = 97;

    printf("\n Name = %s", st_ptr->name);
    printf("\n Mark= %d", (*st_ptr).mark);

    // indirection variable    ->

}