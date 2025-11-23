#include <stdio.h>

int main()
{
    printf("Type a character and press enter (EOF will return 1) or press Ctrl+D to return EOF\n");
    int eof = getchar() != EOF;
    printf("getchar() != EOF evaluated to: %d\n", eof);
}