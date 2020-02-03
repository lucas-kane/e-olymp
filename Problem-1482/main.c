#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fs = fopen("input", "r");
    if (fs != NULL)
    {
        int *pa = NULL, ra = 0, ca = 0;
        int *pb = NULL, rb = 0, cb = 0;

        fscanf(fs, "%d %d", &ra, &ca);
        pa = (int *)calloc(ra * ca, sizeof(int));

        for (int i = 0; i < ra; i++)
            for (int j = 0; j < ca; j++)

                fscanf(fs, "%d", &*(pa + (ca * i + j)));

        fscanf(fs, "%d %d", &rb, &cb);
        pb = (int *)calloc(rb * cb, sizeof(int));

        for (int i = 0; i < rb; i++)
            for (int j = 0; j < cb; j++)

                fscanf(fs, "%d", &*(pb + (cb * i + j)));

        fclose(fs);

        fs = fopen("output", "w");
        if (fs != NULL)
        {
            if (ca == rb)
            {
                int c = 0;
                fprintf(fs, "%d %d\n", ra, cb);

                for (int i = 0; i < ra; i++)
                    for (int j = 0; j < cb; j++)
                    {
                        for (int r = 0; r < ca; r++)
                            c += *(pa + (ca * i + r)) * *(pb + (cb * r + j));
                        fprintf(fs, "%d%c", c, (j >= cb - 1) ? '\n' : ' ');

                        c = 0;
                    }
            }
            else
                fprintf(fs, "%d\n", -1);
            fclose(fs);
        }

        free(pa);
        free(pb);
    }

    return 0;
}