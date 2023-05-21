#include <stdio.h>

struct Fun
{
    int sum;
};

int main()
{
    struct Fun marks={890};
    printf("Sum of marks: %d\n", marks.sum);

    struct Fun *ptr;
    ptr=&marks;

    printf("Enter corrected sum of marks: ");
    scanf("%d", ptr);
    //printf("Address of pointer: %d\n", ptr);

    printf("Sum of marks: %d\n", (*ptr).sum);
    printf("Sum of marks: %d\n", ptr->sum);
    printf("Sum of marks: %d\n", marks.sum);

    return 0;
}
