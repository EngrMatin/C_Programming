#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001], c[27]={0};
    char a[27]="abcdefghijklmnopqrstuvwxyz";
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
                c[j]++;
            }
        }
    }

    int p;
    for(int i=0; i<26; i++)
    {
        if(c[i]==0)
        {
            p=-1;
            break;
        }
        else
        {
            p=1;
        }
        //printf("c[%d]= %d\n", i+1, c[i]);
    }

    if(p==1)
    {
        printf("pangram\n");
    }
    else
    {
        printf("not pangram\n");
    }

    return 0;
}
