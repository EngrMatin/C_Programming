#include<stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

int main()
{
	struct Date date1= {12, 04, 1976};
	struct Date date2= {29, 05, 2022};

	date1.year= date1.year + 59;
	printf("%02d/%02d/%d\n", date1.day, date1.month, date1.year);

	date2= (struct Date) {01, 01, 2022};
	printf("%02d/%02d/%d\n", date2.day, date2.month, date2.year);

	printf("\nEnter Person 1's birthday: ");
	scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

	printf("\nEnter Person 2's birthday: ");
	scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

	if (date1.day==date2.day &&
        date1.month==date2.month &&
        date1.year==date2.year)
    {
        printf("\nThe dates are the same!\n");
    }
    else
    {
        printf("\nThe dates are NOT same.\n");
    }

	return 0;
}
