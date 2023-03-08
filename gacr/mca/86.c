#include<stdio.h>
#define CUBE(x) x*x*x
void main()
{
    int a;
    a = 64/CUBE(4);              // 64/4*4*4 = 16*4*4 = 256
    printf("Result = %d",a);

}

/*
What is the trick here
#define CUBE(x) x*x*x        
here x*x*x present not (x*x*x)

*/