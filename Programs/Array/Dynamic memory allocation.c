#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *ptr= (int*)malloc(n*sizeof(int));
    int *p= (int*)calloc(n, sizeof(int));

    for(int i=0; i<n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    for(int i=0; i<n; i++)
    {
        ptr[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    for(int i=0; i<n; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");

    int arr[n];
    memset(arr, 0, sizeof(arr));
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
