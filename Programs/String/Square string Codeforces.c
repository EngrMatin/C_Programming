#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        char s[101];
        scanf(" %[^\n]", &s);
        //gets(s);

        int len= strlen(s);
        if(len%2 != 0)
        {
            printf("NO\n");
            continue;
        }

        int count=0;
        for(int i=0, j= len/2; i<len/2, j<len; i++, j++)
        {
            if(s[i] != s[j])
               {
                   printf("NO\n");
                   count++;
                   break;
               }
        }
        if(count==0)
        {
            printf("YES\n");
        }
    }

    return 0;
}
