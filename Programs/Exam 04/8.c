#include <stdio.h>
#include <string.h>

void stringCat(char a[], char b[], char out[]);

void main()
{
    char a[100], b[100], out[200];
    gets(a);
    gets(b);

    stringCat(a, b, out);
}

void stringCat(char a[], char b[], char out[])
{
    out=strcat(a,b);
    printf("%s", out);
}

