#include<stdio.h>
#include<string.h>

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);

	char s[100001];
	scanf("%s", s);

	int len= strlen(s);
	int temp;
	for(int i=x-1, j=y-1; i<=j; i++, j--)
    {
        temp= s[i];
        s[i]=s[j];
        s[j]= temp;
    }

    printf("%s\n", s);

    return 0;
}
