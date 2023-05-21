#include <stdio.h>

int main()
{
    char ch = 'a';
    int *pch = &ch;

    printf("pch= %lld, *pch= %c\n", pch, *pch);

    pch++;

    printf("pch= %lld, *pch= %c\n", pch, *pch);


    int n = 20;
    int *pn = &n;

    printf("\n pn= %lld, *pn= %d\n", pn, *pn);

    pn++;

    printf(" pn= %lld, *pn= %d\n", pn, *pn);

    pn--;

    printf(" pn= %lld, *pn= %d\n", pn, *pn);

    pn--;

    printf(" pn= %lld, *pn= %d\n", pn, *pn);

    return 0;
}
    // n = 100 is same as *pn = 100
