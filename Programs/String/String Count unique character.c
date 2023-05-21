#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%[^\n]", s);

    int len=strlen(s), count=0;
    for(int i=0; i<len; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            count++;
        }

        for(int j=i+1; j<len; j++)
        {
            if(s[i]==s[j])
            {
                s[j]='\0';   //to avoid re-visiting
            }
        }
    }
    printf("%d\n", count);

    return 0;
}
