#include<stdio.h>
#include<string.h>

int main()
{
	int i, n;
	scanf("%d", &n);

	char a[1200]= "I hate ";
	char b[15]="that I love ";
	char c[15]="that I hate ";
	char d[5]="it";

    for(i=2; i<=n; i=i+1)
    {
        if(i%2==0)
        {
            strcat(a,b);
        }

        else if(i%2!=0)
        {
            strcat(a,c);
        }
    }

	strcat(a,d);
	puts(a);

    return 0;
}

