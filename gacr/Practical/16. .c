/* 16.	Write a program which takes the radius of a circle as input from the user, 
passes it to another function that computes the area and the circumference of the 
circle and displays the value of area and circumference from the main( ) function.*/

#include <stdio.h>

#define PI 3.1428571
void compute(float r);
float area,cir;

void main()
{
    float radius;
    printf("\n Enter the radius of the Circle: ");
    scanf("%f", &radius);
    compute(radius);
    
    printf("\n Area = %.2f", area);
    printf("\n Circumference = %.2f", cir);
  
}

void compute(float r)
{
    area = PI * r *r ;
    cir = 2 * PI * r ;
}