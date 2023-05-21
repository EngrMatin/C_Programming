#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf(" %s", s);

    int len=strlen(s), count=0;
    for(int i=0; i<len; i++)
    {
        for(int j=i+1; j<i+2; j++)
        {
            if(s[i]==s[j] && s[i]!='\0')
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
