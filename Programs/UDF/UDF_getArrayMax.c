#include <stdio.h>

int getMax(int a, int b);
int getArrayMax(int n, int array[]);

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    int arrayMax= getArrayMax(n, array);
    printf("%d\n", arrayMax);

    return 0;
}

int getMax(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int getArrayMax(int n, int array[])
{
    int max= array[0];
    for(int i=0; i<n; i++)
    {
        max= getMax(array[i], max);
    }
    return max;
}

