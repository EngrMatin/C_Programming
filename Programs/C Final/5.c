/* C program to check if a string contains all digits from 0 to 9 */

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%[^\n]", s);

    char a[11]= "0123456789";
    char counter[11]= {0};

    int len= strlen(s);
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(s[i]==a[j])
            {
                counter[j]++;
            }
        }
    }

    int flag=1;
    for(int i=0; i<10; i++)
    {
        if(counter[i]==0)
        {
            flag=0;
        }
    }

    if(flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
