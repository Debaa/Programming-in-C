// Write a program to find the average of two numbers

#include <stdio.h>
void main()
{
    float num1, num2;
    float avg;
    
    printf("\n Enter two numbers : ");
    scanf("%f%f", &num1, &num2);
    
    avg = (num1 + num2)/2 ;
    
    printf("\n The average is %f", avg);
}