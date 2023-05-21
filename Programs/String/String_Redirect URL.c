#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, j, k, len;
    scanf("%d\n", &t);

    for(i=1; i<=t; i++)
    {
        char url[101], surl[101];
        gets(url);
        len=strlen(url);

        if(url[4]!='s')
        {
            for(j=4, k=0; url[j], k<(len-4); j++, k++)
            {
                surl[k]=url[j];
            }
            surl[k]='\0';
            printf("Case %d: https%s\n", i, surl);
        }
        else
        {
            printf("Case %d: %s\n", i, url);
        }

    }

    return 0;
}
