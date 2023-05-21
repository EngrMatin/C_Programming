#include <stdio.h>
#include <string.h>

int main()
{
    char w[11];
    scanf("%s", &w);

    char s[1001], end[]="END_OF_TEXT";
    int count=0;
    while(1)
    {
       scanf("%s", &s);
       if(strcmp(s,end)==0)
       {
           break;
       }
       if(strcasecmp(w, s)==0)
       {
           count++;
       }
    }
    printf("%d\n", count);

    return 0;
}
