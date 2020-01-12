#include <stdio.h>

int main()
{
    puts("Begin PROGRAM!!!");

#ifdef DEBUG

    puts("\tDebug info...");

#endif

    puts("End Program!!!");

    return 0;
}
