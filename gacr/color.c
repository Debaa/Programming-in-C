#include <stdio.h>
#include <conio.h>
void red() { printf("\033[1;31m");}
void yellow(){printf("\033[1;33m");}
void reset() {printf("\033[0m");}

int main() {
  red();
  printf("Hello ");
  yellow();
  printf("world\n");
  reset();

  printf("\n My name is\033[1;31m Debasish Mohanta \033[0m");

  return 0;
}