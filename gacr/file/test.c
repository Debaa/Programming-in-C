#include<stdio.h>
void main()
{
   FILE *fp;
   //fp = fopen("test", "w");
   //fseek(fp,20,0);
   //putc(65,fp);
   //fclose(fp);

   fp = fopen("test", "r");
   fseek(fp,3,0);
   printf("%d",getc(fp));

   fseek(fp,3,1);
   printf("%d",getc(fp));

   fseek(fp,-2,2);
   printf("%d",getc(fp));

   fclose(fp);

}