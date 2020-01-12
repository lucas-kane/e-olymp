// gcc -Wall -g -D DBG_E_OLYMP main.c -o a.out
// #define DBG_E_OLYMP

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN_LIMIT 0x30
#define MAX_LIMIT 0x39

#define BUFSIZE 12u

int main()
{
#ifndef DBG_E_OLYMP
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
#endif
    char buf[BUFSIZE];
    memset(buf, 0, BUFSIZE);

    short unsigned int i = 0u;
    char ch = '\0';
    do
    {
        if ((ch = getc(stdin)) == 0xA)
            break;
        if (MIN_LIMIT <= ch && ch <= MAX_LIMIT && i < BUFSIZE)
            buf[i++] = ch;
    } while (ch != EOF);
    buf[i] = '\0';

    if (i == 2u)
        printf("%c %c\n", *buf, *(buf + 1));

#ifndef DBG_E_OLYMP
    fclose(stdin);
    fclose(stdout);
#endif

    return EXIT_SUCCESS;
}
