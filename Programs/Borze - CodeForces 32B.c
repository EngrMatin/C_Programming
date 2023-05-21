#include <stdio.h>
#include <string.h>

int main()
{
    char a[201]="", b[201]="";
    scanf("%[^\n]", &a);
    //gets(s1);

    int i, j, len= strlen(a);
    for(i=0, j=0; i<len; i++, j++)
    {
        if(a[i]=='.')
        {
            b[j]='0';
        }
        else if(a[i]=='-' && a[i+1]=='.')
        {
            b[j]='1';
            i++;
        }
        else
        {
            b[j]='2';
            i++;
        }
    }
    b[j]=='\0';
    printf("%s", b);

    return 0;
}
