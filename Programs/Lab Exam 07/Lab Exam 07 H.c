#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf(" %s", s);

    int len=strlen(s);
    int flag=0;
    for(int i=0; i<len; i++)
    {
        int count=1;
        for(int j=i+1; j<len; j++)
        {
            if(s[i]!=s[j])
            {
                break;
            }
            count++;

            if(count>2)
            {
                i++;
            }
        }

        if(count>=7)
        {
            flag=1;
            break;
        }
    }

    if(flag)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    return 0;
}
