#include<stdio.h>
#include<stdbool.h>

bool is_reverese_sorted(int n, int a[]);

int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	for(int i=0; i<n; i++)
		{
			scanf("%d", &a[i]);
		}

	printf("%s", is_reverese_sorted(n, a)? "True":"False");
	return 0;
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
