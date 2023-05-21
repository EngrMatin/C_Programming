#include <stdio.h>

int main()
{
    int n = 10;
    int a[10]={1,2,3,4,5,6,7,8,9,0}, b[10]={0,9,8,7,6,5,4,3,2,1};
    for (int i=0; i<n; i++)
    {
        int temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
    for (int i=0; i<n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}
