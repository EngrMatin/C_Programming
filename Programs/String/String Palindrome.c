#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s", &a);
    strcpy(b,a);
    strrev(b);

    int len= strlen(a);
    for(int i=0; i< len; i++)
    {
        if(a[i] != b[i])
        {
            printf("Not Palindrome");
            return 0;
        }
    }
    printf("Palindrome");
    return 0;
}
