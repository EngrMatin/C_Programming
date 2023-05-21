#include <stdio.h>
#include <string.h>

int main()
{
    char s[10];
    scanf("%s", &s);

    for(char i='0'; i<='9'; i++)
    {
        if(strchr(s, i)==NULL)
        {
            printf("%c\n", i);
        }
    }
    return 0;
}
