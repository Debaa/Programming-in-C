#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a;
    float b;

   // printf("\n Enter : ");
    //scanf("%f",&b);     // doubt
    //printf("\n b= %f", b);   


    //include
    char str[20]="START";
    //printf("\n Enter Characters : ");
    //scanf("%[abcd]s",str);             // only takes, a,b,c,d, other character causes stop scanning
    //printf("\n str= %s", str);
    //exclude
    printf("\n Enter Characters : ");
    scanf("%[^abcd]s",str);             // a,b,c,d, causes stop scanning
    printf("\n str= %s", str);

    int num1=10,num2=20;
    printf("\n Enter 2 numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("\n num1= %d", num1);
    printf("\n num2= %d", num2); 


}
