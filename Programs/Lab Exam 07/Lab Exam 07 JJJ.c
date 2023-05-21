#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%[^\n]", s);

    int count=0;
    int len=strlen(s);
    for(int i=1; i<len; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            count++;
        }
    }

    if(count==len-1)
    {
        for(int i=0; i<len; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]= s[i]+32;
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                s[i]= s[i]-32;
            }
        }
    }
    printf("%s", s);

    return 0;
}
