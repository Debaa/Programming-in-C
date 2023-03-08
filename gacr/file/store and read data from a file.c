/* Write a program to store data into a file and read data from the same file */
#include<stdio.h>
void main()
{
    FILE *fp;   // fp is a file pointer
    char c;

    // Writing
    fp = fopen("INPUT","w");  // Opening a file in writing mode
    printf("\n Enter Data (Then Press Enter,Ctrl+Z,Enter): ");
    while((c=getchar()) != EOF)
    {
        putc(c, fp);
    }
    fclose(fp);

    // Reading
    fp = fopen("INPUT", "r");
    while((c=getc(fp)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fp);

}