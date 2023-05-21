#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%[^\n]", s);

    int len=strlen(s);
    char num[11]="0123456789";
    char lo_c[30]="abcdefghijklmnopqrstuvwxyz";
    char up_c[30]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char sp_ch[15]="!@#$%^&*()-+";

    int no, low, up, sp=0;
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(s[i]==num[j])
            {
                no=1;
                break;
            }
        }
        for(int k=0; k<26; k++)
        {
            if(s[i]==lo_c[k])
            {
                low=1;
                break;
            }
        }
        for(int l=0; l<26; l++)
        {
            if(s[i]==up_c[l])
            {
                up=1;
                break;
            }
        }
        for(int m=0; m<12; m++)
        {
            if(s[i]==sp_ch[m])
            {
                sp=1;
                break;
            }
        }
    }

    int flag=no+low+up+sp;
    if(len>=6 && flag==4)
    {
        printf("0\n");
    }
    else if(len>=6 && flag!=4)
    {
        printf("%d\n", 4-flag);
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
    }


    if(len>=6 && flag==4)
    {
        printf("Strong");
    }
    else
    {
        printf("Weak");
    }

    return 0;
}
