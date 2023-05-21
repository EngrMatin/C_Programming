#include<stdio.h>
#include<stdbool.h>

bool is_reverese_sorted(int n, int a[]);
void sort(int n, int a[]);

int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	for(int i=0; i<n; i++)
		{
			scanf("%d", &a[i]);
		}

	sort(n, a);

	for(int i=0; i<n; i++)
	{
		printf("%d", a[i]);
		if(i != n-1)
        {
            printf(" ");
        }
	}
	return 0;
}

void sort(int n, int a[])
{
    if(is_reverese_sorted(n, a))
    {
        return;
    }
    else
    {
        int temp;
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<n-1; k++)
            {
                if(a[k]<a[k+1])
                {
                    temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                }
            }
        }
    }
}

bool is_reverese_sorted(int n, int a[])
{
	for(int i=0; i<n-1; i++)
    {
        if(a[i]<a[i+1])
        {
            return false;
        }
    }
    return true;
}
