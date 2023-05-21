#include <stdio.h>

int main()
{
    int t, count= 0;
    scanf("%d", &t);

    for(int k=0; k<t; k++)
    {
        int n;
        scanf("%d", &n);

        int arr[n], freq[n+1];
        //memset(freq, 0, sizeof(freq));
        for(int i=0; i<n+1; i++)
        {
            freq[i]=0;
        }
        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
            freq[arr[i]]++;
        }

        for(int i = 0; i <= n; i++)
        {
            if(freq[i] >= 3)
            {
                count= 1;
                printf("%d\n", i);
                break;
            }
        }

        if(count==0)
        {
            printf("-1\n");
        }
        count=0;
    }
    return 0;
}
