#include <stdio.h>

int change_values(int ar[], int n, int l, int r);

int main()
{
    int size;
    scanf("%d", &size);

    int arr[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x, y;
    scanf("%d %d", &x, &y);

    change_values(arr, size, x, y);

    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

int change_values(int ar[], int n, int l, int r)
{
    for(int i=l; i<=r; i++)
    {
        ar[i]=0;
    }
}
