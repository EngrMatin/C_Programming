#include <stdio.h>
#include <string.h>

int main()
{
    char s[11], t[11];
    scanf("%s %s", &s, &t);

    int temp=strcmp(s,t);
    if(temp>=1)
    {
        printf("No\n");
        return 0;
    }
    printf("Yes\n");

    return 0;
}
