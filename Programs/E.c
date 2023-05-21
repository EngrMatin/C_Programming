#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);                             //1

	int n;
	for(int i=0; i<t; i++)
    {
        scanf("%d", &n);                         //4
        int a[n];
        for(int j=0; j<n; j++)
        {
            scanf("%d", &a[j]);                  //3 2 7 6
        }
        int temp, count=0, good=0, imp=0;
        for(int j=0; j<n; j++)
        {
            if(j%2==a[j]%2)             //                      1%2 == 3%2
            {
                good=1;                 //                      good=1
            }
            else if(j%2 != a[j]%2)      //        0%2 != 3%2                   2%2 != 7%2
            {
                if(j%2==a[j+1]%2)       //        0%2 == 2%2                   2%2 != 6%2
                {
                    temp=a[j];
                    a[j]=a[j+1];         //        a[0]= 2                     a[2]= 6
                    a[j+1]=temp;         //        a[1]= 3                     a[3]= 7
                    count++;             //        count= 1                    count= 2
                }
                else
                {
                    imp=1;
                }
            }
        }
        printf("count= %d\n", count);
        if(good>0)
        {
            printf("good= 0\n");
        }
        if(imp>0)
        {
            printf("imp= -1\n");
        }
    }

	return 0;
}



