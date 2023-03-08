#include<stdio.h>
#define CUBE(x) (x*x*x)
void main()
{
    int a=2,result;
    result = CUBE(++a) / (++a);
    printf("a=%d \n result=%d",a,result);

}

/*
(++a * ++a * ++a) / (++a)

*/