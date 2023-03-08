// Write a C program to display the contents of the file in reverse order.

#include<stdio.h>
void main()
{
    FILE *file;
    char fileName[20];
    int i=0;

    printf("\n Enter the name of file : ");
    scanf("%s", fileName);

    // Opening file in Reading Mode 
    file = fopen(fileName, "r");
    
    if(file == NULL)   //or if(!file)
        printf("\n File not found");
    
    else
    {
        fseek(file, 0, SEEK_END);
        int length = ftell(file);
        
        while(i<length)
        {
            i++;
            fseek(file, -i, SEEK_END);
            printf("%c", getc(file));
        }
        
        fclose(file);
    }

}
