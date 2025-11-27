#include <stdio.h>

int main()
{
    int blanks, tabs, nl, c;
    blanks = 0;
    tabs = 0;
    nl = 0;

    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        else if (c == ' ')
            ++blanks;
        else if (c == '\t')
            ++tabs;
    printf("%d newlines, %d blanks, %d tabs.\n", nl, blanks, tabs);
}