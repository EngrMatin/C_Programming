#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int size=sizeof(s)/sizeof(s[0]);
    printf("\nsizeof array= %d\n", size);
    printf("sizeof string= %d\n", sizeof(s));
    printf("sizeof single element= %d\n", sizeof(s[0]));
    printf("\nlength of string= %d\n", strlen(s));

    char a[100]="";
    printf("\nlength of string= %d\n", strlen(a));
    char b[100]={};
    printf("\nlength of string= %d\n", strlen(b));
    char c[100]={0};
    printf("\nlength of string= %d\n", strlen(c));
    char d[100]="0";
    printf("\nlength of string= %d\n", strlen(d));

    char p[100]="This is a string.";
    printf("\nlength of string= %d\n", strlen(p));

    p[8]='Z';
    printf("\n%s\n", p);

    return 0;
}

