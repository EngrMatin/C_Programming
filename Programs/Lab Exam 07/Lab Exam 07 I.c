#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char s[n+1];
    scanf("%s", &s);

    int countn=0, countz=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]== 'n')
        {
            countn++;
        }
        if(s[i]== 'z')
        {
            countz++;
        }
    }

    for(int i=0; i<countn; i++)
    {
        printf("1 ");
    }

    for(int i=0; i<countz; i++)
    {
        printf("0 ");
    }
    return 0;
}
