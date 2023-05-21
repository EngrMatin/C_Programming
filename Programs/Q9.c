#include <stdio.h>
#include <string.h>

int checkPalindrome(char s[]);

int main()
{
    char str[100];
    scanf("%s", &str);

    int ans= checkPalindrome(str);
    printf("%d", ans);

    return 0;
}

int checkPalindrome(char s[])
{
    char s2[100];

    strcpy(s2,s);
    strrev(s2);

    int len= strlen(s), count=0;
    for(int i=0; i< len; i++)
    {
        if(s[i] != s2[i])
        {
            count++;
        }
    }
    return count/2;
}
