#include <stdio.h>

int main()
{
    int number;

    scanf("%d", &number);
    printf("%d %d\n", number / 10, number % 10);

    return 0;
}