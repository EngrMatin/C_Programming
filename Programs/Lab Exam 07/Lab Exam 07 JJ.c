#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%[^\n]", s);

    int count=0;
    int len=strlen(s);
    for(int i=0; i<len; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            count++;
        }
    }

    if(!(count==len || (count==len-1 && s[0]>='a' && s[0]<='z')))
    {
        printf("%s", s);
    }
    else if(count==len)
    {
        for(int i=0; i<len; i++)
        {
            s[i]= s[i]-'A'+'a';
        }
        printf("%s", s);
    }
    else
    {
       s[0]= s[0]-'a'+'A';
       for(int i=1; i<len; i++)
        {
            s[i]= s[i]-'A'+'a';
        }
        printf("%s", s);
    }

    return 0;
}
