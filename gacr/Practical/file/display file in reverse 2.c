// Write a C program to display the contents of the file in reverse order.

#include<stdio.h>
void main()
{
    FILE *file;
    char fileName[20];

    printf("\n Enter the name of file : ");
    scanf("%s", fileName);

    // Opening file in Reading Mode 
    file = fopen(fileName, "r");
    
    if(file == NULL)   //or if(!file)
        printf("\n File not found");
    
    else
    {
        fseek(file, -1L, SEEK_END); 
        int length = 1 + ftell(file);
        
        for(int i=0; i<length; i++)
        {
            printf("%c", getc(file));
            fseek(file, -2L, 1);
        }
        fclose(file);
    }

}
