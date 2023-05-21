#include<stdio.h>
#include<string.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char name[100];
    char class[30];
    int roll;
    struct Date dob;
};

void printStudent(struct Student st);
void printDate(struct Date today);
struct Student inputStudent(struct Student st);
struct Date inputDate();

int main()
{
	struct Student st1;

    int n;
    printf("Number of Students: ");
    scanf("%d", &n);

    struct Student student[n];
    for(int i=0; i<n; i++)
    {
        printf("Input Student %d Info: \n", i+1);
        student[i]= inputStudent(st1);
    }

    for(int i=0; i<n; i++)
    {
        printf("\nStudent %d Informations are: \n", i+1);
        printStudent(student[i]);
    }

	return 0;
}

struct Student inputStudent(struct Student st)
{
    printf("Name: ");
    gets(st.name);
    gets(st.name);

    printf("Class: ");
    scanf("%s", &st.class);

    printf("Roll: ");
    scanf("%d", &st.roll);

    printf("DOB: ");
    st.dob= inputDate();

    return st;
}

void printStudent(struct Student st)
{
    printf("Name: %s\n", st.name);
    printf("Class: %s\n", st.class);
    printf("Roll: %d\n", st.roll);
    printf("DOB: ");
    printDate(st.dob);
}

struct Date inputDate()
{
    struct Date today;
    scanf("%d %d %d", &today.day, &today.month, &today.year);
    return today;
}

void printDate(struct Date today)
{
    printf("%02d-%02d-%d", today.day, today.month, today.year);
}
