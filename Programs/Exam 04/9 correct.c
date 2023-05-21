#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];
    int *ptr = array;

    for(int i=0; i<n; i++)
    {
        scanf("%d", (ptr+i));
    }

    for(int i=0, j=n-1; i<j; i++, j--)
    {
        int temp= array[i];
        array[i]= array[j];
        array[j]= temp;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", *(ptr+i));
    }

    return 0;
}


