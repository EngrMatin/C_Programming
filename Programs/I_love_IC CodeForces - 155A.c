#include <stdio.h>

int main()
{
    int n, a[1001];
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max=a[0], min=a[0], count=0;
    for(int i=1; i<n; i++)
    {
        if(a[i]>max || a[i]<min)
        {
            count++;
        }

        if(a[i]>max)
        {
            max=a[i];
        }

        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d\n", count);
    return 0;
}
