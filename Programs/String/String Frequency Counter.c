#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100];
    scanf("%s", &arr);

    int len= strlen(arr);
    int counter[26]={0};
    char value;
    for(int i=0; i< len; i++)
    {
        value=arr[i];
        counter[value-'a']++;   // to make it index; index=0 for a, index=1 for b
    }
    for(value='a'; value<='z'; value++)
    {
        if(counter[value-'a']>0)
        {
            printf("Value: %c, Frequency: %d\n", value, counter[value-'a']);
        }
    }
    return 0;
}
