#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Зручно використовувати для налагодження рішень умовну директиву DEBUG
#ifndef DEBUG
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
#endif

    int n;
    scanf("%d", &n);

    if (10 <= n && n <= 99)
        printf("%d %d\n", n / 10, n % 10);

    return EXIT_SUCCESS;
}