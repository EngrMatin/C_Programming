#include<stdio.h>

struct Result
{
    int quotient;
    int remainder;
};

struct Result Divide(int x, int y);

int main()
{
    int a=10, b=3;

    struct Result ans;
    ans= Divide(a, b);

    printf("Quotient= %d\nRemainder= %d\n", ans.quotient, ans.remainder);
    return 0;
}

struct Result Divide(int x, int y)
{
    return (struct Result) {x/y, x%y};
};
