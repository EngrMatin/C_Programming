#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100];
    scanf("%s", &arr);

    int index=0;
    while(arr[index] != '\0')
    {
        index++;
    }
    printf("Length: %d\n", index);

    printf("Length: %d\n", strlen(arr));

    return 0;
}
