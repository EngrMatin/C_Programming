#include<stdio.h>
#include<string.h>

void toBinary(unsigned int val, char str[], int k);

int main()
{
    unsigned int v;
    scanf("%d", &v);

    char str[100];
    toBinary(v, str, 8);
    printf("%s\n", str);

    return 0;
}

void toBinary(unsigned int val, char str[], int k)
{
    int digit, index=0;
    while(val>0)
    {
        digit= val%2;
        val= val/2;
        str[index]= '0'+digit;
        index++;
    }
    for(int i=index; i<k; i++)
    {
        str[i]='0';
    }
    str[k]= '\0';
    strrev(str);
}
