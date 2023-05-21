#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int freq[n];
    memset(freq, 0, sizeof(freq));   //  to initialize a variable sized array
                                     //  for(int i = 0; i < n; i++)
                                     //  {
                                     //     freq[i]=0;
                                     //  }
    for(int i = 0; i < n; i++)
    {
        int value= arr[i];
        freq[value]++;
    }
    for(int i = 0; i < n; i++)
    {
        int value= arr[i];
        printf("Value: %d, Count: %d\n", value, freq[value]);
    }
    for(int value=0; value<=10; value++)
    {
        if(freq[value]>0)
        {
            printf("\nValue: %d, Count: %d\n", value, freq[value]);
        }
    }
    return 0;
}
