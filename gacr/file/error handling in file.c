/* Write a program to demonstrate Error Handling */

#include<stdio.h>
void main( )
{
    FILE *fp1, *fp2;
    char fileName[20];
    int i, number;
   
    // Writing
    fp1 = fopen("test", "w");
    for(i=0; i<=100; i=i+10)
        putw(i, fp1);
    fclose(fp1);

    printf("\n Enter a file : ");
    scanf("%s", fileName);
    
    // Reading
    fp2 = fopen(fileName, "r");
    
    if(fp2 == NULL){
        printf("\n File not found !");
    }
    else
    {
        for(i=0; i<20; i++)
        {
            number = getw(fp2);
            if(feof(fp2))
            {
                printf("\n Run out of Data.");
                break;
            }
            else
            {
                printf(" %d", number);
            }
        }
    
        fclose(fp2);
    }
    
}