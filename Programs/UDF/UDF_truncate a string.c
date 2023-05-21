#include <stdio.h>
#include <string.h>

void truncate(char s[], int k);

void main()
{
    char s[100];
    gets(s);

    int k;
    scanf("%d", &k);

    truncate(s, k);
    printf("%s", s);

}

void truncate(char s[], int k)
{
    int n= strlen(s);
    if(k<0 ||k>n)
    {
        return;
    }
    else
    {
        s[k]='\0';
    }
}

