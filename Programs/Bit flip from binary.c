#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    gets(str);

    printf("The Original binary value is %s\n", str);

    int len=strlen(str);
    for(int i=0; i<len-1; i++)
    {
        if(str[i]=='1')
        {
            str[i]='0';
            printf("After flipping the leftmost 1, we get: %s\n", str);
            break;
        }
    }

    return 0;
}
