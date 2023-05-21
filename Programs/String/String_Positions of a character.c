#include<stdio.h>
#include<string.h>

int main()
{
	char c, str[100];
	gets(str);
	scanf("%c", &c);

	int flag=0, freq=0;
	int len= strlen(str);
	printf("\nPositions of the character in the given string are: ");
	for(int i=0; i<len; i++)
    {
        if(str[i] == c)
        {
            flag= 1;
            printf("%d ", i+1);
            freq++;
        }
    }

    if (flag)
    {
        printf("\nThe character occured %d times in the given string.\n", freq);
    }
    else
    {
       printf("None!\nThe character is not present in the given string.\n");
    }
	return 0;
}

