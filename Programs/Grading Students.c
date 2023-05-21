#include<stdio.h>

int main()
{
	int n, grade[100];
	scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &grade[i]);
    }

    for(int i=1; i<=n; i++)
    {

        if(grade[i]>=38 && ((5-grade[i]%5)<3))
        {
            grade[i]=grade[i]+(5-(grade[i]%5));
            printf("%d\n", grade[i]);
        }
        else if(grade[i]>=38 && ((5-grade[i]%5)>=3))
        {
            printf("%d\n", grade[i]);
        }
        else
        {
            printf("%d\n", grade[i]);
        }
    }

    return 0;
}

