#include <stdio.h>
#include <string.h>

int main()
{
    char a[100]="Hello";
    char b[100]="World";

    int lena=strlen(a);
    int lenb=strlen(b);
    int lenc=lena+lenb;

    char c[lenc+1];
    for(int i=0; i<lena; i++)
    {
        c[i]=a[i];
    }
    for(int i=0; i<lenb; i++)
    {
        c[lena+i]=b[i];
    }
    c[lenc]='\0';
    printf("%s\n", c);

    for(int i=0; i<lenb; i++)
    {
        a[lena+i]=b[i];
    }
    a[lena+lenb]='\0';
    printf("%s\n", a);

    strcat(a, b);
    printf("%s\n", a);

    strncat(a, b, 18);
    a[18]='\0';
    printf("%s\n", a);

    return 0;
}

