#include <stdio.h>

int main()
{
    int number;
    
    scanf("%d", &number);

    int count = (number == 0) ? 1 : 0;
    while (number != 0)
    {
        count++;
        number /= 10;
    }

    printf("%d\n", count);

    return 0;
}