#include<stdio.h>
#include<string.h>

int main()
{
	char s[51];
	scanf("%s", s);

	int count=0;
	int len= strlen(s);
	for(int i=0; i<len; i++)
    {
        if (s[i]=='a')
        {
            count++;
        }
    }

    if(count>len/2)
    {
        printf("%d\n", len);
    }
    else
    {
        printf("%d\n", 2*count-1);
    }

    return 0;
}
