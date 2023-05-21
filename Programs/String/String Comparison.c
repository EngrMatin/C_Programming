#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int index=0;
    while(a[index]==b[index] && a[index] != '\0' && b[index] != '\0')
    {
        index++;
    }
    if(a[index]=='\0' && b[index]=='\0')
    {
        printf("Equal\n");
    }
    else if(a[index] != '\0' && b[index]=='\0')
    {
        printf("%s is smaller\n", b);
    }
    else if(a[index] == '\0' && b[index] != '\0')
    {
        printf("%s is smaller\n", a);
    }
    else if(a[index] < b[index])
    {
        printf("%s is smaller\n", a);
    }
    else
    {
        printf("%s is smaller\n", b);
    }

    int cmp= strcmp(a,b);
    if(cmp==0)
    {
        printf("Equal\n");
    }
    else if(cmp<0)
    {
        printf("%s is smaller\n", a);
    }
    else if(cmp>0)
    {
        printf("%s is smaller\n", b);
    }

    return(0);
}
