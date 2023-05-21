#include<stdio.h>
void main()
{
    char name[30], dob[20];
    int mobile;
    printf("Please enter your name: ");
    gets(name);
    printf("Please enter your date of birth: ");
    gets(dob);
    printf("Please enter your mobile number: ");
    scanf("%d", &mobile);

    puts(name);
    puts(dob);

    printf("\nName  : %s", name);
    printf("\nDOB   : %s", dob);
    printf("\nMobile: %d", mobile);

}
