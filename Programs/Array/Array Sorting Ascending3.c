/* Program that sort an array using bubble sort in ascending order */

#include<stdio.h>

void main()
{
	int n, a[100], temp;

	printf("How many numbers: ");
	scanf("%d", &n);

	for(int i=0; i<n; i++)
    {
        printf("Element[%d]= ", i+1);
        scanf("%d", &a[i]);
    }

	for(int j=n-1; j>0; j--)     //for controlling no. of pass
	{
		for(int k=0; k<j; k++)   //for comparing value
		{
			if(a[k]>a[k+1])
			{
				temp=a[k];      //swap operation
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	}

	printf("\nAfter sorting the array values are: \n");
	for(int i=0; i<n; i++)
	{
		printf("%4d", a[i]);
	}
}

