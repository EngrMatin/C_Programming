#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001], c[11]={0};
    char a[11]="0123456789";
    //gets(s);
    scanf("%[^\n]", s);

    int len=strlen(s);
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(s[i]==a[j])
            {
                c[j]++;
            }
        }
    }

    for(int i=0; i<10; i++)
    {
        printf("%d", c[i]);
        if(i != 9)
        {
            printf(" ");
        }
    }
    return 0;
}
