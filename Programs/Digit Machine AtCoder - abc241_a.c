#include <stdio.h>

int main()
{
    int to[10];

    for(int i=0; i<10; i++)
    {
        scanf("%d", &to[i]);
    }

    int current=0;
    for(int i=0; i<3; i++)
    {                          //0 1 2 3 4 5 6 7 8 9
        current=to[current];   //9 0 1 2 3 4 5 6 7 8
    }
    printf("%d\n", current);
    return 0;
}
