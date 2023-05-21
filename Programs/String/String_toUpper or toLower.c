#include<stdio.h>
#include<string.h>

int main()
{
	char s[101];
	gets(s);

	int len= strlen(s);
	int capCount=0, smCount=0;
	for(int i=0; i<len; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            capCount++;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            smCount++;
        }
    }

	if(capCount>smCount)
    {
        for(int i=0; i<len; i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]=s[i]-32;
            }
        }
    }
    else
    {
        for(int i=0; i<len; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
        }
    }
    printf("%s\n", s);
	return 0;
}
