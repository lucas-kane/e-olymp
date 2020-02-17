/* 
 * ПРОСТА ЗАДАЧА?
 * Програма зчитує двоцифрове число і виводить через пропуск кожну цифрру окремо. 
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (10 <= n && n <= 99)
        printf("%d %d\n", n / 10, n % 10);

    return EXIT_SUCCESS;
}