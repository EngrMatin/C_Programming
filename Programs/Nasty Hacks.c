#include<stdio.h>
int main()
{
	int n, r[100], e[100], c[100], i;
	scanf("%d", &n);

	for(i=1; i<=n; i++)
    {
        scanf("%d %d %d", &r[i], &e[i], &c[i]);
    }

    for(i=1; i<=n; i++)
    {
       if((e[i]-r[i])>c[i])
            printf("\nadvertise\n");
        else if ((e[i]-r[i])<c[i])
            printf("do not advertise\n");
        else
            printf("does not matter\n");
    }

}
