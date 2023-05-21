#include<stdio.h>

int main()
{
	int n, p, score[100001], count=0;
	scanf("%d %d", &n, &p);

	for(int i=1; i<=n; i++)
    {
        scanf("%d", &score[i]);
    }
    for(int i=1; i<=n; i++)
    {
        if(score[i]<p)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}

