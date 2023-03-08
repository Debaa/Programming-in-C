#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a=15;
    printf("%d", a);

    float b = 12.340000;
    printf("\n%e", b);
    printf("\n%f", b);
    printf("\n%g", b);
    
    int *ptr =&a;
    printf("\n%p", ptr);

    //field width
    int c = 12345;
    printf("\n%10d", c);  // right justified  // reserved 10 locations
    printf("\n%-10d", c);  // left justified   doubt

    //precision
    a=15;
    printf("\n%.4d", a);
    printf("\n%8.4d", a); // 8-width, 4-precision

    printf("\n%.2e", b);
    printf("\n%.2f", b);
    printf("\n%.3g", b);

    // string
    char name[20] ="Debasish";
    printf("\n%s", name);
    printf("\n%.3s", name);
    printf("\n%8.3s", name);
    printf("\n%*.*s", 8,3,name);
    //system("pause");

}