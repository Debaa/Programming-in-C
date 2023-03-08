/* 20. Write a program to copy the content of one file to other.*/

#include <stdio.h>
void main()
{
    FILE *fp1, *fp2;
    char file1[20], file2[20];
    int length;

    printf("\n Enter the name of file to copy : ");
    scanf("%s", file1);
    printf("\n Enter the name of new file : ");
    scanf("%s", file2);

    // Opening File1 in Reading Mode 
    fp1 = fopen(file1, "r");
    
    if(fp1 == NULL)
    {
        printf("\n File not found");
    }
    else
    {
        // To find how many bytes in File1
        fseek(fp1, 0L, SEEK_END);   // go to end of file 1
        length = ftell(fp1);        // ask about position, that is the length
        rewind(fp1);                // Reset to start

        // Create File2 (Writing Mode)
        fp2 = fopen(file2, "w");
        
        // Now copy
        for(int i=1; i<=length ; i++)
        {
            putc(getc(fp1), fp2);
        }
        
        // Closing Files
        fclose(fp1);
        fclose(fp2);

        printf("\n File copied Sucessfully");
    }
}