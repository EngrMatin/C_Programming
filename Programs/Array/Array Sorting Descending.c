/* 10.13 Write a program that read and sort an array using bubble sort in descending order */

#include<stdio.h>

void main()
{
	int i,n,a[100],j,k,temp;

	printf("How many numbers: ");
	scanf("%d",&n);

	for(i=0; i<n; i++)
    {
        printf("Element[%d]= ", i);
        scanf("%d", &a[i]);
    }

	for(j=n-1; j>0; j--)
	{
		for(k=0; k<j; k++)
		{
			if(a[k]<a[k+1])
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	}

	printf("\nAfter sorting the array contains: \n");
	for(i=0; i<n; i++)
	{
		printf("%4d", a[i]);
	}
}

