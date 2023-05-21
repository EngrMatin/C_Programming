#include<stdio.h>
#include<string.h>

void toBinary(unsigned int val, char str[]);

int main()
{
    unsigned int v;
    scanf("%d", &v);

    char str[100];
    toBinary(v, str);
    printf("%08s\n", str);

    return 0;
}

void toBinary(unsigned int val, char str[])
{
    int digit, index=0;
    while(val>0)
    {
        digit= val%2;
        val= val/2;
        str[index]= '0'+digit;
        index++;
    }
    for(int i=0, j=index-1; i<j; i++, j--)
    {
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    str[index]= '\0';
}
