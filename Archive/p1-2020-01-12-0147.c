#include <stdio.h>

int main()
{
    int num = 0;

    FILE *fs = fopen("input", "r");
    if (fs)
    {
        fscanf(fs, "%d", &num);
        fclose(fs);

        if (10 <= num && num <= 99)
        {
            fs = fopen("output", "w");
            fprintf(fs, "%d %d\n", num / 10, num % 10);
            fclose(fs);
        }
    }

    return 0;
}
