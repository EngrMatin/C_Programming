#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char k[21];
    scanf("%d %s", &n, &k);

    int len=strlen(k);
    int fact=1;
    for(int i=n; i>0; i=i-len)
    {
        fact=fact*i;
    }
    printf("%d", fact);

    return 0;
}
