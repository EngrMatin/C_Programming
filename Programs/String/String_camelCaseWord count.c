#include <stdio.h>
#include <string.h>

int main()
{
    char s[100001];
    scanf("%s", &s);

    int len, count=1;
    len=strlen(s);
    for(int i=0; i<len; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
