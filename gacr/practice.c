#include<stdio.h>
void main()
{
    int num1,num2,num3;
  
    printf("\n Enter two  numbers : ");
    scanf("%d%d%d", &num1, &num2 ,&num3);

   
    if(num1 > num2)
    {
        if(num1>num3)
            printf("\n The largest number is : %d", num1);
    }
    else
        if(num2>num3)
            printf("\n The largest number is : %d", num2);
        else
            printf("\n The largest number is : %d", num3);
  
}