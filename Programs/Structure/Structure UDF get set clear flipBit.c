#include<stdio.h>
#include<string.h>

struct Binary
{
    char str[50];
};

struct Binary toBinary(unsigned int val, int k);
int getBit(unsigned int mask, int k);
int setBit(unsigned int mask, int k);
int clearBit(unsigned int mask, int k);
int flipBit(unsigned int mask, int k);

int main()
{
    int x;
    scanf("%d", &x);

    printf("%d= %s\n", x, toBinary(x, 8).str);

    for(int i=0; i<8; i++)
    {
        printf("%dth bit: %d\n", i, getBit(x, i));
        printf("Clear: %s\n", toBinary(clearBit(x, i), 8).str);
        printf("Set: %s\n", toBinary(setBit(x, i), 8).str);
        printf("Flip: %s\n", toBinary(flipBit(x, i), 8).str);
    }

    return 0;
}

struct Binary toBinary(unsigned int val, int k)
{
    struct Binary ans;
    int digit, index=0;
    while(val>0)
    {
        digit= val%2;
        val= val/2;
        ans.str[index]= '0'+digit;
        index++;
    }
    for(int i=index; i<k; i++)
    {
        ans.str[i]= '0';
    }
    ans.str[k]= 0;
    strrev(ans.str);
    return ans;
}

int getBit(unsigned int mask, int k)
{
    return (mask & (1<<k)) != 0;
}

int setBit(unsigned int mask, int k)
{
    return mask | (1<<k);
}

int clearBit(unsigned int mask, int k)
{
    return mask & ~(1<<k);
}

int flipBit(unsigned int mask, int k)
{
    return mask ^ (1<<k);
}
