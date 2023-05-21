#include<stdio.h>
#include<string.h>

void makeStrCopy(char in[], char out[]);

int main()
{
	char in[100], out[100];
	gets(in);

	makeStrCopy(in, out);

    printf("%s\n", out);

	return 0;
}

void makeStrCopy(char in[], char out[])
{
    int len= strlen(in);
    for(int i=0; i<len; i++)
    {
        out[i]= in[i];
    }
}
