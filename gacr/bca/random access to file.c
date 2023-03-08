#include<stdio.h>
void main()
{
    FILE *fp;
    short a[5]= {1,2,3,4,5};

    char name[] = "RAM";

    fp= fopen("myfile.txt", "w");

    //fwrite(&name, 3, 1,fp);
    //fwrite(&a[0], sizeof(short),5,fp);


    char arr[10] = {'N','E','W',' ','Y','O','R','K','1','\0'};
    fwrite(&arr[0],sizeof(char),10,fp);
    fclose(fp);

    fp=fopen("myfile.txt", "r");

    char data[10];
    fread(&data[0], sizeof(char), 10, fp);

    printf("\n %s", data);
    
}
