/* command line arguments */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("\n argc= %d", argc);
    
    for(int i=0; i<argc; i++)
    {
        printf("\n argv[%d]= %s", i, argv[i]);
    }

    return 0;
}

