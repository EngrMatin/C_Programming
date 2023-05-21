#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], freq[10*n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int visited = -1;
    for(int i = 0; i < n; i++)
    {
        int count = 1;
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j]){
                count++;
                freq[j] = visited;  //to avoid counting same element again
            }
        }
        if(freq[i] != visited)
        {
            freq[i] = count;
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(freq[i] != visited)
        {
            printf("%d: %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
