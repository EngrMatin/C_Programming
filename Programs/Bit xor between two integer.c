#include<stdio.h>
#include<string.h>

void toBinary(unsigned int val, char str[]);

int main()
{
    unsigned int l, r;
    printf("Enter two integer value l and r: ");
    scanf("%d %d", &l, &r);

    char sl[100], sr[100], sxor[100];
    toBinary(l, sl);
    toBinary(r, sr);

    printf("l= %08s\n", sl);
    printf("r= %08s\n", sr);

    unsigned int xor= l ^ r;
    toBinary(xor, sxor);

    printf("xor= %d\n", xor);
    printf("xor= %08s\n", sxor);

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
