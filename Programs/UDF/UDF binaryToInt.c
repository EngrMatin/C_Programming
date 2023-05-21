#include<stdio.h>
#include<string.h>

unsigned int binaryToInt(char str[]);

int main()
{
    char str[100];
    gets(str);
    printf("%d\n", binaryToInt(str));
    return 0;
}

unsigned int binaryToInt(char str[])
{
    int len= strlen(str);
    unsigned int ans=0;
    for(int i=0; i<len; i++)
    {
        int bit= str[i]- '0';
        ans=ans*2 + bit;
    }
    return ans;
}
