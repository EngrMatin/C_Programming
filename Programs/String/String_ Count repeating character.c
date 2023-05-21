#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%s", &s);

    int len=strlen(s), count=0;
    for(int i=0; i<len; i++)
    {
        for(int j=i+1; j<len; j++)
        {
            if(s[i]==s[j] && s[i]!='\0')
            {
                count++;
                s[j]='\0';   //to avoid re-visiting
            }
        }
    }
    //printf("len=%d\n", len);
    //printf("count=%d\n", count);
    int ans=len-count;
    if(ans%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }

    return 0;
}
