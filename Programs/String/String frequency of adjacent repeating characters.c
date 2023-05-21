#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf(" %s", s);

    int len=strlen(s);
    for(int i=0; i<len; i++)  //Iterate through 1st pointer
    {
        int count=1;
        for(int j=i+1; j<len; j++)  // Iterate through 2nd pointer
        {
            if(s[i]!=s[j])  //if next element is different then break
            {
                break;
            }
            count++;

            if(count>2)   //Example: if count is 3 then move the first pointer so that count remains intact
            {
                i++;
            }
        }
        if(count>1)
        {
            printf("%c: %d\n", s[i], count);
        }
    }

    return 0;
}
