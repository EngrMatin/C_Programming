#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char s[101];
    for(int j=0; j<n; j++)
    {
        scanf(" %s", &s);

        int len=strlen(s);
        for(int i=0; i<len; i++)
        {
            if(i==0 || i%2==0 || i==len-1)
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
