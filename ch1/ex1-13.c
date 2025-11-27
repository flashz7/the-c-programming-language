#include <stdio.h>

int main()
{
    int c, i, nc, j;
    int wl[10];

    for (i = 0; i < 10; ++i)
        wl[i] = 0;

    nc = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (nc > 0) {
                if (nc < 10)
                    ++wl[nc];
                nc = 0;
            }
        } else {
            ++nc;
        }
    }

    for (i = 1; i < 10; i++) {
        printf("%d: ", i);
        for (j = 0; j < wl[i]; ++j)
            putchar('*');
        putchar('\n');
    }


}