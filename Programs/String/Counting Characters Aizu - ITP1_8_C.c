#include <stdio.h>
#include <string.h>

int main()
{
    char s[1200], counter[30]={0};
    char a[30]="abcdefghijklmnopqrstuvwxyz";
    //gets(s);
    scanf("%[^\n]", s);

    int len=strlen(s);
    for(int i=0; i<len; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        for(int j=0; j<26; j++)
        {
            if(s[i]==a[j])
            {
                counter[j]++;
            }
        }
    }

    for(int i=0; i<26; i++)
    {
        printf("%c : %d\n", a[i], counter[i]);
    }

    return 0;
}
