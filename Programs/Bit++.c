#include<stdio.h>

int main()
{
	int n, x=0;
	scanf("%d", &n);

	for(int i=1; i<=n; i++)
    {
        char a, b, c;
        scanf(" %c%c%c", &a,&b,&c);

        if(a=='+' && b=='+' && c=='X')
        {
            x++;
        }
        else if(a=='X' && b=='+' && c=='+')
        {
            x++;
        }
        else if(a=='-' && b=='-' && c=='X')
        {
            x--;
        }
        else if(a=='X' && b=='-' && c=='-')
        {
            x--;
        }
    }

    printf("%d", x);

    return 0;
}

