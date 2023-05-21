#include <stdio.h>
#include <string.h>

int main()
{
    int n, count1=0, count2=0;
    scanf("%d", &n);

    char s[n];
    scanf(" %[^\n]", &s);

    int len= strlen(s);
    for(int i=0; i<len; i++)
    {
        if(s[i]=='x')
        {
            count1++;
        }
        if(s[i]!='x' && count1>=3)
        {
            count2 += count1-2;
        }
        if(s[i]!='x')
        {
            count1=0;
        }
    }
    if(count1>=3)
    {
        count2 += count1-2;
    }
    printf("%d", count2);

    return 0;
}
