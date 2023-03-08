// Write a program to demonstrate different kinds of functions.

#include <stdio.h>

void input(void);
int sum(void);
int dif(int, int);
void mul(int, int);

int num1, num2;

void main()
{
    int val1, val2;
    int n1,n2;
    input();

    n1= num1;
    n2= num2;

    val1 = sum();
    val2 = dif(n1, n2);  // Actual argument

    printf("\n Sum = %d", val1);
    printf("\n Difference = %d", val2);
    mul(n1, n2);
}

void input(void)
{
    printf("\n Enter two numbers : ");
    scanf("%d%d", &num1, &num2);
}

int sum(void)
{
    int temp;
    temp = num1 + num2;
    return temp;
}

int dif(int n, int m)   //n and m are Formal arguments
{
    int temp2;
    temp2 = n-m;
    return temp2;
}

void mul(int n, int m)
{
     int prod;
     prod = n * m ;
     printf("\n Product= %d",prod);
}