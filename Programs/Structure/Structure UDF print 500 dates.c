#include<stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Date getNextDate(struct Date today);

int main()
{
	struct Date today;

	printf("\nEnter today's date: ");
	scanf("%d %d %d", &today.day, &today.month, &today.year);

    int days;
    printf("\nHow many days: ");
	scanf("%d", &days);

	struct Date current= today;
	for(int i=0; i<days; i++)
    {
        current= getNextDate(current);
        printf("Day %d: ", i+1);
        printf("%02d-%02d-%d\n", current.day, current.month, current.year);
    }
	return 0;
}

struct Date getNextDate(struct Date today)
{
    struct Date nextDate= today;
    int daysInMonth[12]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

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
    return nextDate;
}


