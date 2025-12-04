#include <stdio.h>

int lower(int x)
{
    if (x >= 'A' && x <= 'Z')
        x = x + 32;
    return(x);
}
int main()
{
    char n[] = "This is a test String";
    for (int i = 0; n[i] != '\0'; i++) {
        n[i] = lower(n[i]);
    }
    printf("%s\n", n);
}

