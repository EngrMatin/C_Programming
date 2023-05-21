/* There are N people numbered 1, 2, , ,…,N. We have K gifts.
Staring with Person A , gifts are distributed one by one sequentially.
Who will receive the last gift? */

#include<stdio.h>

int main()
{
	int n, k, a, p;
	scanf("%d %d %d", &n, &k, &a);

    if(k%n==0)
    {
        k=n;
    }
    else
    {
        k=k%n;
    }

	if((k+(a-1))<=n)
    {
        p=k+(a-1);
    }
    else
    {
        p=k+(a-1)-n;
    }

    printf("%d", p);

    return 0;
}

