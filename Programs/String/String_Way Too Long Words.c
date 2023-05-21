#include <stdio.h>

int main()
{
    int n;
    scanf("%d\n", &n);

    char s[101];
    for(int i=1; i<=n; i++)
    {
        gets(s);

        int len=strlen(s);
        if(len<=10)
        {
            puts(s);
        }
        else
        {
            printf("%c%d%c\n", s[0], len-2, s[len-1]);
        }
    }
    return 0;
}
