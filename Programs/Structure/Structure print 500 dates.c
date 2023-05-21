#include<stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

int main()
{
	struct Date today;

	printf("\nEnter today's date: ");
	scanf("%d %d %d", &today.day, &today.month, &today.year);

    int days;
    printf("\nHow many days: ");
	scanf("%d", &days);

    struct Date nextDate= today;
    int daysInMonth[12]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for(int i=0; i<days; i++)
    {
        if (nextDate.day != daysInMonth[nextDate.month-1])
        {
            nextDate.day++;
        }
        else if (nextDate.month != 12)
        {
            nextDate.day= 1;
            nextDate.month++;
        }
        else
        {
            nextDate.day= 1;
            nextDate.month= 1;
            nextDate.year= nextDate.year+1;
        }
        printf("%02d-%02d-%d\n", nextDate.day, nextDate.month, nextDate.year);
    }

	return 0;
}



