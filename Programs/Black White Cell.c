#include<stdio.h>
int main()
{
    int r1, c1, r2, c2, wh_cell_left;

    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);

    wh_cell_left=(r1-r2)*(c1-c2);

    printf("%d", wh_cell_left);

    return 0;
}

