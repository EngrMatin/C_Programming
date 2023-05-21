#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d", &n);
	getchar();

	char name[1001][25];
	for(int i=0; i<n; i++)
    {
        gets(name[i]);
    }

    int flag=1;
    for(int i=0; i<n; i++)
    {
        if(flag==0)
        {
            break;
        }

        for(int j=i+1; j<=n; j++)
        {
            if(strcmp(name[i], name[j])==0)
            {
                flag=0;
                break;
            }
        }
    }

    if(flag==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
