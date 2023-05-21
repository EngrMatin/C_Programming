#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a;
        scanf("%d",&a);
        sum+=a;
    }
    printf("%f",sum/n);
}
