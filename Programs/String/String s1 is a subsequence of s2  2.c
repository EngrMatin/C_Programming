#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isSubSequence(char s1[1001], char s2[1001], int m, int n);  //Returns true if s1 is subsequence of s2

int main()
{
    char a[1001], b[1001];
    scanf("%s %s", &a, &b);

    int m= strlen(a);
    int n= strlen(b);

    if(isSubSequence(a, b, m, n))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

bool isSubSequence(char s1[1001], char s2[1001], int m, int n)
{
    int j=0;             // For index of str1 (or subsequence)
    for(int i=0; i<n && j<m; i++)    // Traverse str2 and str1, and compare current character of str2 with first unmatched char of str1, if matched then move ahead in str1
    {
        if(s1[j]==s2[i])
        {
            j++;
        }
    }
    return j== m;
}
