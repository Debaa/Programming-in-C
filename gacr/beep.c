// C program to make beep sound

#include <stdio.h>
#include <Windows.h>

int main(int argc, char* argv[])
{

    printf("Beep sound started\n");
    Beep(5000,900);
    Sleep(50);
    Beep(5000,900);

    printf("Beep sound stopped\n");

    return 0;
}