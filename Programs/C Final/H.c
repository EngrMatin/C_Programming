#include <stdio.h>
#include <string.h>

int main()
{
    char s[101], a[101]={0};
    scanf("%[^\n]", s);

    int len=strlen(s);
    for(int i=0, j=0; i<len; i++)
    {
        if(s[i]=='1' || s[i]=='2' || s[i]=='3')
        {
            a[j]=s[i];
            j++;
        }
    }

    int n=strlen(a);
	for(int j=0; j<n; j++)
	{
		for(int k=0; k<n-1; k++)
		{
			if(a[k]>a[k+1])
			{
				int temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	}

    for(int i=0; i<n; i++)
    {
        printf("%c", a[i]);
        if(i!=n-1)
        {
            printf("+");
        }
    }

    return 0;
}
