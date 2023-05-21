#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int b[n];
    for(int i=0; i<n; i++)
    {
        b[n-1-i]= a[i];
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
