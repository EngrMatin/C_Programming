#include<stdio.h>
#include<string.h>

void toBinary(unsigned int val, char str[]);

int main()
{
    unsigned int x=35;
    //scanf("%d", &x);

    char sx[100], sleft[100], sright[100];
    int lx= x<<1;
    int rx= x>>1;

    toBinary(x, sx);
    toBinary(lx, sleft);
    toBinary(rx, sright);

    printf("x= %d %08s\n", x, sx);
    printf("lx= %d %08s\n", lx, sleft);
    printf("rx= %d %08s\n", rx, sright);

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

