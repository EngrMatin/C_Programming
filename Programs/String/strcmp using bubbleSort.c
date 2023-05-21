#include <stdio.h>
#include <string.h>

void bubblesort(char a[])
{
    int i, j, len;
    char temp;
    len= strlen(a);
    for(i=0; i<len; i++)
    {
        for(j=0; j<len-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    char s1[101], s2[101], s3[101];
    gets(s1);
    gets(s2);
    gets(s3);

    strcat(s1,s2);
    bubblesort(s1);
    bubblesort(s3);

    int x= strcmp(s1,s3);
    if(x==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
