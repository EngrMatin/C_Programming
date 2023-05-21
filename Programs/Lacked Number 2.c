#include <stdio.h>
#include <string.h>

int main()
{
    char s[10];
    scanf("%s", &s);

    int freq[10]={0};

    for(int i=0; i<9; i++)
    {
        char c=s[i];
        int digit=c-'0';
        freq[digit]++;
    }

    int ans;
    for(int i=0; i<=9; i++)
    {
        if(freq[i]==0)
        {
            ans=i;
        }
    }
    printf("%d\n", ans);
    return 0;
}
