// Write a program to demonstrate random access to a file 

#include <stdio.h>
void main()
{
    FILE* fp;
    long n;
    char c;

    // Writing
    fp = fopen("RANDOM", "w");
    printf("\n Enter Data : ");
    while ((c = getchar()) != EOF)
        putc(c, fp);
    printf("Number of characters entered = %d", ftell(fp));
    fclose(fp);

    // Reading
    fp = fopen("RANDOM", "r");
    n = 0L;
    while (feof(fp) == 0)
    {
        fseek(fp, n, 0); /* Position to (n+1)th character */
        printf("\n %c is in %d", getc(fp), ftell(fp));
        n = n + 5L;
    }

    rewind(fp);
    printf("\n\n rewind(fp) \t\t %c is in %d", getc(fp), ftell(fp));

    fseek(fp, 0L, 0);
    printf("\n fseek(fp, 0L, 0) \t %c is in %d", getc(fp), ftell(fp));

    fseek(fp, 1L, 1);
    printf("\n fseek(fp, 1L, 1) \t %c is in %d", getc(fp), ftell(fp));

    fseek(fp, -3L, 2);
    printf("\n fseek(fp, -3L, 2) \t %c is in %d", getc(fp), ftell(fp));
 
   
    fclose(fp);
  
}