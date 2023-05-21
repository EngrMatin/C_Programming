#include <stdio.h>

int main()
{
    int a[100], size;
    size=sizeof(a)/sizeof(a[0]);
    printf("sizeof array= %d\n", size);
    printf("sizeof int values= %d\n", sizeof(a));
    printf("sizeof single element= %d\n", sizeof(a[0]));

    long b[100];
    printf("\nsizeof long=%d\n", sizeof(b));

    long long c[100];
    printf("\nsizeof long long=%d\n", sizeof(c));

    char s[100];
    int sz=sizeof(s)/sizeof(s[0]);
    printf("\nsizeof array= %d\n", sz);
    printf("sizeof string= %d\n", sizeof(s));
    printf("sizeof single element= %d\n", sizeof(s[0]));

    return 0;
}
