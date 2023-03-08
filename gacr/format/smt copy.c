#include <stdio.h>
#include <stdlib.h>

#define clear() printf("\033[H\033[J")
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))

int main(void)
{
  
    clear();

    gotoxy(1, 1); printf("*");
    gotoxy(2, 2); printf("*");
    gotoxy(3, 3); printf("*");
    gotoxy(4, 4); printf("*");
    gotoxy(5, 5); printf("*");
    gotoxy(10, 10); printf("*");
    gotoxy(12, 12); printf("*");
    gotoxy(1, 14); printf("*");
    gotoxy(1, 16); printf("*");
    gotoxy(1, 18); printf("*");
    system("pause");
    return 0;
}