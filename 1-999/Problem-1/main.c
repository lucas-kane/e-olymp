// gcc -Wall -g -D DBG_E_OLYMP main.c -o a.out
// #define DBG_E_OLYMP

#include <stdio.h>
#include <stdlib.h>

#define MIN_LIMIT 10
#define MAX_LIMIT 99

int main()
{
    unsigned int num = 0u;

#ifndef DBG_E_OLYMP

    freopen("input", "r", stdin);
    freopen("output", "w", stdout);

#endif

    scanf("%u", &num);

    if (MIN_LIMIT <= num && num <= MAX_LIMIT)
        printf("%u %u\n", num / 10, num % 10);


#ifndef DBG_E_OLYMP

    fclose(stdin);
    fclose(stdout);

#endif

    return EXIT_SUCCESS;
}