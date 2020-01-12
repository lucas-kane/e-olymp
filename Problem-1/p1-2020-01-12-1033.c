#include <stdio.h>

int main()
{
    char buf[BUFSIZ];

    scanf("%s", buf);
    printf("%c %c\n", *buf, *(buf + 1));

    return 0;
}
