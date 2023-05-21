#include <stdio.h>
#include <string.h>

int getRoot(int a, int b, int c, int *root1, int *root2);

void main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int root1, root2;
    int roots= getRoot(a, b, c, &root1, &root2);
    printf("We have %d roots.\n", roots);
    if(roots>=1)
    {
       printf("%d\n", root1);
    }
    if(roots==2)
    {
        printf("%d\n", root2);
    }

}

int getRoot(int a, int b, int c, int *root1, int *root2)
{
    double D= b*b-4*a*c;
    if(D<0)
    {
        return 0;
    }
    else if(D==0)
    {
        *root1= (-b)/(2*a);
        return 1;
    }
    else
    {
        *root1= (-b + sqrt(D))/(2*a);
        *root2= (-b - sqrt(D))/(2*a);
        return 2;
    }
}
