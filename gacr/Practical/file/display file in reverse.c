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
        fseek(file, -1L, 2);    // last character
 
        while(1)
        {
            printf("%c", getc(file)); // index will be +1 after getc()
            if(ftell(file)==1)         
                break;
            
            fseek(file, -2L, 1);  // back 2 character from current position
        }

        fclose(file);
    }

}
