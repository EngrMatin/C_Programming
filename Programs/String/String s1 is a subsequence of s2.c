#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isSubSequence(char s1[1001], char s2[1001]);  //Returns true if s1 is subsequence of s2

int main()
{
    char a[1001], b[1001];
    scanf("%s %s", &a, &b);

    if(isSubSequence(a, b))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

bool isSubSequence(char s1[1001], char s2[1001])
{
    int len1= strlen(s1);
    int len2= strlen(s2);
    int i=0, j=0;
    while(i<len1 && j<len2)
    {
        if(s1[i]==s2[j])
        {
            i++;            //If i reaches end of s1,that mean we found all characters of s1 in s2, so s1 is subsequence of s2, else not
        }
        j++;
    }
    return i==len1;
}
