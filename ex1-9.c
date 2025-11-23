#include <stdio.h>

int main()
{
    int c, prev;
    prev = 0;

    while ((c = getchar()) != EOF){
        if (c == ' ') {
            if (prev != ' ')
                putchar(c);
        }
        else {
            putchar(c);
        }
        prev = c;
    }

}