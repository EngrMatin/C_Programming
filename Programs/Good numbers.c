/* Good numbers are the good digits 4 and 7. For example, numbers 4747, 74, 4 are good and 5, 157, 4657 are not.
Petya calls a number nearly good if the number of good digits in it is a good number. */

#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);

    int digit, count=0;
    while(n>0)
    {
        digit=n%10;
        n=n/10;
        if(digit==4 || digit==7)
        {
            count++;
        }
    }

    if(count==4 || count==7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
