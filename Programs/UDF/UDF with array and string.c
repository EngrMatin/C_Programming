#include <stdio.h>
#include <string.h>

int GetMin(int a, int b);
int GetArrayMin(int n, int array[]);
void RevArray(int n, int array[]);
void RevString(int n, char str[]);

int main()
{
    int array[]={4,5,3,2,5};
    int size=5;
    //int size= sizeof(array)/sizeof(array[0]);

    int arrayMin= GetArrayMin(size, array);
    printf("%d\n", arrayMin);

    RevArray(size, array);

    char str[]="Hello World!";
    int len= strlen(str);
    RevString(len, str);

    return 0;
}

int GetMin(int a, int b)
{
    if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int GetArrayMin(int n, int array[])
{
    int min= array[0];
    for(int i=0; i<n; i++)
    {
        min= GetMin(array[i], min);
    }
    return min;
}

void RevArray(int n, int array[])
{
    for(int i=0, j=n-1; i<j; i++, j--)
    {
        int temp= array[i];
        array[i]= array[j];
        array[j]= temp;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
}

void RevString(int n, char str[])
{
    for(int i=0, j=n-1; i<j; i++, j--)
    {
        int temp= str[i];
        str[i]= str[j];
        str[j]= temp;
    }
    printf("\n%s", str);
}
