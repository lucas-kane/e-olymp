#include <limits.h>
#include <stdio.h>

int main()
{
    int number, end, begin;

    scanf("%d", &number);

    if ((INT_MIN <= number && number <= -10) || (10 <= number && number <= INT_MAX))
    {
        number = (number < 0) ? number * -1 : number;
        end = number % 10;
        while (number != 0)
        {
            begin = number;
            number /= 10;
        }

        printf("%d\n", begin + end);
    }

    return 0;
}