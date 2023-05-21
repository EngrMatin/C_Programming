#include <stdio.h>
#include <string.h>

int main()
{
    char t[101], s[301], p[101];
    scanf("%s %s", t, p);

    strcpy(s, t);
    strcat(s, t);

    if(strstr(s, p) != NULL)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
