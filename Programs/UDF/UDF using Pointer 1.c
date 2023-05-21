#include <stdio.h>

void MakeDouble(int *a);

int main()
{
    int x = 15;

    MakeDouble(&x);
    printf("%d", x);

    return 0;
}

void MakeDouble(int *a)
{
    *a = *a*2;
}

