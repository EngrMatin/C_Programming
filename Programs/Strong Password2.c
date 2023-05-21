#include <stdio.h>
#include <string.h>

int main()
{
    char s[101], sp_ch[15]="!@#$%^&*()-+";
    scanf("%[^\n]", s);


    int no, low, up, sp=0;
    int len=strlen(s);
    for(int i=0; i<len; i++)
    {
        if(s[i]>=0 || s[i]<=9)
            {
                no=1;
                break;
            }
    }
    printf("no=%d\n", no);

    for(int i=0; i<len; i++)
    {
        if(s[i]>='a' || s[i]<='z')
            {
                low=1;
                break;
            }
    }
    printf("low=%d\n", low);

    for(int i=0; i<len; i++)
    {
        if(s[i]>='A' || s[i]<='Z')
            {
                up=1;
                break;
            }
    }
    printf("up=%d\n", up);

    for(int i=0; i<len; i++)
    {
        for(int j=0; j<12; j++)
        {
            if(s[i]==sp_ch[j])
            {
                sp=1;
                break;
            }
        }
    }
    printf("sp=%d\n", sp);

    int flag=no+low+up+sp;
    if(len>=6 && flag==4)
    {
        printf("0\n");
    }
    else if(len>=6 && flag!=4)
    {
        printf("%d\n", 4-flag);
        if(no!=1)
        {
            printf("Number missing!\n");
        }
        if(low!=1)
        {
            printf("Lowercase Character missing!\n");
        }
        if(up!=1)
        {
            printf("Uppercase Character missing!\n");
        }
        if(sp!=1)
        {
            printf("Special Character missing!\n");
        }
    }
    else if(len<6 && flag==4)
    {
        printf("%d\n", 6-len);
    }
    else if(len<6 && flag!=4)
    {
        int lx=6-len;
        int fx=4-flag;
        if(lx>fx)
        {
            printf("%d\n", lx);
        }
        else
        {
            printf("%d\n", fx);
        }
        if(no!=1)
        {
            printf("Number missing!\n");
        }
        if(low!=1)
        {
            printf("Lowercase Character missing!\n");
        }
        if(up!=1)
        {
            printf("Uppercase Character missing!\n");
        }
        if(sp!=1)
        {
            printf("Special Character missing!\n");
        }
    }

    if(len>=6 && flag==4)
    {
        printf("\nStrong Password\n");
    }
    else
    {
        printf("\nWeak Password!\n");
    }

    return 0;
}
