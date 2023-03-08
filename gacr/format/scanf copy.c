#include<stdio.h>
#include<stdlib.h>

void main()
{
    // skipping 
    int num1=10,num2=20;
    printf("\n Enter 2 numbers: ");
    scanf("%d-%d",&num1,&num2);      //if 123-45 is entered, num1=123, num2=1234
    printf("\n num1= %d", num1);
    printf("\n num2= %d", num2); 
    
    printf("\n Enter 2 numbers: ");
    scanf("%d*%d",&num1,&num2);      //if 123-45 is entered, num1=123, num2=1234
    printf("\n num1= %d", num1);
    printf("\n num2= %d", num2); 

}
