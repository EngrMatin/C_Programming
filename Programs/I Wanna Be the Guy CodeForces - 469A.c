#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int freq[n+1];
    memset(freq, 0, sizeof(freq));

    int p;
    scanf("%d", &p);

    int arrp[p];
    for(int i=1; i<=p; i++)
    {
       scanf("%d", &arrp[i]);
       freq[arrp[i]]++;
    }

    int q;
    scanf("%d", &q);

    int arrq[q];
    for(int i=1; i<=q; i++)
    {
       scanf("%d", &arrq[i]);
       freq[arrq[i]]++;
    }

    for(int i=1; i<=n; i++)
    {
        if(freq[i]==0)
        {
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }
    printf("I become the guy.\n");

    return 0;
}
