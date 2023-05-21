#include<stdio.h>

struct Student
{
    int class;
    int roll;
    int marks;
};

int main()
{
	struct Student st1;

    int n;
    printf("Number of Students: ");
    scanf("%d", &n);

    struct Student student[n];
    for(int i=0; i<n; i++)
    {
        printf("\nInput informations of Student-%d: \n", i+1);

        printf("Class: ");
        scanf("%d", &student[i].class);

        printf("Roll No.: ");
        scanf("%d", &student[i].roll);

        printf("Marks: ");
        scanf("%d", &student[i].marks);
    }

    int total=0;;
    for(int i=0; i<n; i++)
    {
        total = total + student[i].marks;
    }

    for(int i=0; i<n; i++)
    {
        printf("\nInformations of Student-%d: \n", i+1);
        printf("Class: %d\n", student[i].class);
        printf("Roll No.: %d\n", student[i].roll);
        printf("Marks: %d\n", student[i].marks);
    }

    printf("\nTotal marks of all students: %d\n", total);

	return 0;
}
