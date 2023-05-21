#include <stdio.h>

void dynamic(int s, ...);

int main()
{
    dynamic(2, 4, 6, 8);

    return 0;
}

void dynamic(int s, ...)
{
    printf("%d ", s);
}
