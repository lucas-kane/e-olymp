#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buf[BUFSIZ], ch = '\0';
    unsigned short i = 0u;

    FILE *fs;
    if (!(fs = fopen("input", "r")))
        perror("Помилка відкриття файлу \"Input\" для читання вхідних даних.");
    else
    {
        memset(buf, 0, BUFSIZ);
        do
        {
            ch = fgetc(fs);
            if ((ch >= '0' && ch <= '9') && i < BUFSIZ)
            {
                *(buf + i) = ch;
                i++;
            }
        } while (ch != EOF);
        buf[BUFSIZ - 1] = '\0';

        fclose(fs);

        if (strlen(buf) == 2)
        {
            if ((fs = fopen("output", "w")))
            {
                fputc(*buf, fs);
                fputc(0x20, fs);
                fputc(*(buf + 1), fs);
                fputc(0x0a, fs);

                fclose(fs);
            }
            else
                perror("Помилка відкриття файлу \"Output\" для запису");
        }
    }

    return EXIT_SUCCESS;
}
