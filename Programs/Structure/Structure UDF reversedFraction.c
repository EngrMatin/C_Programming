#include<stdio.h>

struct Fraction
{
    int num;    //numerator= lob
    int denom;  //denominator= hor
};

struct Fraction reversedFraction(struct Fraction frac);

int main()
{
	struct Fraction frac= {2, 3};

	printf("Please enter the numerator: ");
	scanf("%d", &frac.num);

	printf("Please enter the denominator: ");
	scanf("%d", &frac.denom);

    printf("\nThe original fraction was: %d/%d\n", frac.num, frac.denom);

	struct Fraction ans= reversedFraction(frac);
	printf("The reversed fraction is: %d/%d\n", ans.num, ans.denom);

	return 0;
}

struct Fraction reversedFraction(struct Fraction frac)
{
    int temp= frac.num;
    frac.num= frac.denom;
    frac.denom= temp;

    return frac;
};
