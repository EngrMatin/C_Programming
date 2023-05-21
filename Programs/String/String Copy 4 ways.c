#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    gets(a);

    int len= strlen(a);
    for(int i=0; i<len; i++)
    {
        b[i]=a[i];
    }
    b[len]= '\0';
    printf("%s\n", b);

    int j=0;
    while(a[j]!='\0')
    {
        b[j]=a[j];
        j++;
    }
    b[j]='\0';
    printf("%s\n", b);

    strcpy(b, a);
    printf("\n%s", b);

    strncpy(b, a, 8);
    b[8]='\0';
    printf("\n%s", b);

    return 0;
}
