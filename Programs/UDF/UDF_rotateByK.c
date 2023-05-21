#include <stdio.h>

void rotate(int n, int a[]);
void rotateByK(int n, int a[], int k);

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int k;
    scanf("%d", &k);

    rotateByK(n, a, k);

    for (int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

void rotate(int n, int a[])
{
    int first= a[0];
    for(int i=0; i<n-1; i++)
    {
        a[i]= a[i+1];
    }
    a[n-1]= first;
    //return ;
}

void rotateByK(int n, int a[], int k)
{
    for(int i=0; i<k; i++)
    {
        k= k%n;
        rotate(n, a);
    }
}

