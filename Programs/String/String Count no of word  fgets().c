#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char arr[100];
    fgets(arr, 100, stdin);
    int len= strlen(arr);
    arr[len-1]='\0';

    bool word= false;
    int count=0;
    char value;
    for(int i=0; i< len; i++)
    {
        value=arr[i];
        if(value != ' ')
        {
            word= true;
        }
        if(value == ' ')
        {
            if(word== true)   //to ignore extra spaces
            {
                count++;
                word= false;
            }
        }
    }

    if(word==true)
    {
        count++;  // to count the last word
    }

    printf("No of Word= %d\n", count);

    return 0;
}
