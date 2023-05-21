#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int k=0; k<t; k++)
    {
        int n;
        scanf("%d", &n);

        char arr[n];
        scanf("%s", &arr);

        int flag=0;
        for(int i = 0; i <=n-11; i++)
        {
            if(arr[i]=='8')
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
