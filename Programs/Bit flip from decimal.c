#include<stdio.h>
#include<string.h>

struct Binary
{
    char str[50];
};

struct Binary toBinary(unsigned int val, int k);
int getBit(unsigned int mask, int k);
int flipBit(unsigned int mask, int k);

int main()
{
    int x;
    scanf("%d", &x);

    printf("Binary representation of %d= %s\n", x, toBinary(x, 8).str);

    for(int i=8; i>0; i--)
    {
        if(getBit(x, i)==1)
        {
            printf("After flipping the leftmost 1, we get: %s\n", toBinary(flipBit(x, i), 8).str);
            break;
        }
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

int flipBit(unsigned int mask, int k)
{
    return mask ^ (1<<k);
}
