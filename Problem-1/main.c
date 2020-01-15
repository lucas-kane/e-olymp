/* 
 * ПРОСТА ЗАДАЧА?
 * Програма зчитує двоцифрове число і виводить через пропуск кожну цифрру окремо. 
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Для налагодження рішень зручно використовувати умовну директиву DEBUG,
    // потрібно лише оголосити 
#define DEBUG
#if !defined DEBUG
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
#endif 

    int n;
    scanf("%d", &n);

    if (10 <= n && n <= 99)
        printf("%d %d\n", n / 10, n % 10);

    return EXIT_SUCCESS;
}