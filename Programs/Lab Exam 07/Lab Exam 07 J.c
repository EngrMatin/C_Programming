#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s[101];
    scanf("%[^\n]", s);

    char ch;
    bool c= true;
    int len=strlen(s);
    for(int i=1; i<len; i++)
    {
        if(islower(s[i]))
        {
            c= false;
        }
    }

    if(c==true)
    {
        for(int j=0; j<len; j++)
        {
            if(islower(s[j]))
            {
                ch= toupper(s[j]);
            }
            else
            {
                ch= tolower(s[j]);
            }
            printf("%c", ch);
        }
    }
    else
    {
        printf("%s", s);
    }

    return 0;
}
