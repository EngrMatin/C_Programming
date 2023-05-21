#include <stdio.h>

void RevArray(int n, int array[]);

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    RevArray(&n, a);

    return 0;
}

void RevArray(int n, int array[])
{
    for(int i=0, j=n-1; i<j; i++, j--)
    {
        int temp= array[i];
        array[i]= array[j];
        array[j]= temp;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
}
