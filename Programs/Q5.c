#include <stdio.h>
#include <stdbool.h>

bool checkArray(int a[], int n);

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bool result= checkArray(arr, n);
    if(result)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}

bool checkArray(int a[], int n)
{
    bool ans= true;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=i+1)
        {
            ans= false;
        }
    }

    return ans;
}
