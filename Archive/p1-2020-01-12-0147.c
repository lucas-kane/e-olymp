#include <stdio.h>

int main()
{
    int n = 0;

    FILE *fs = fopen("input", "r");
    if (fs)
    {
        fscanf(fs, "%d", &n);
        fclose(fs);

        if (10 <= n && n <= 99)
        {
            fs = fopen("output", "w");
            fprintf(fs, "%d %d\n", n / 10, n % 10);
            fclose(fs);
        }
    }

    return 0;
}
