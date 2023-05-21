/* Result with GPA example */

#include<stdio.h>
#include<stdbool.h>

void main()
{
    int n;                         //n denotes no. of subjects & m denotes marks
    float m, gp, sum=0, gpa;
    bool failed=false;

    printf("\n Enter number of subjects: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        printf("\n Enter marks obtained in subject %d: ", i);
        scanf("%f", &m);

        if(m>=80 && m<=100)
        {
            printf("\n Grade: A+\n");
            gp=4.0;
        }
        else if(m>=75 && m<80)
        {
            printf("\n Grade: A\n");
            gp=3.75;
        }
        else if(m>=70 && m<75)
        {
            printf("\n Grade: A-\n");
            gp=3.5;
        }
        else if(m>=65 && m<70)
        {
            printf("\n Grade: B+\n");
            gp=3.25;
        }
        else if(m>=60 && m<65)
        {
            printf("\n Grade: B\n");
            gp=3.0;
        }
        else if(m>=55 && m<60)
        {
            printf("\n Grade: B-\n");
            gp=2.75;
        }
        else if(m>=50 && m<55)
        {
            printf("\n Grade: C+\n");
            gp=2.5;
        }
        else if(m>=45 && m<50)
        {
            printf("\n Grade: C\n");
            gp=2.25;
        }
        else if(m>=40 && m<45)
        {
            printf("\n Grade: D\n");
            gp=2.0;
        }
        else if(m>=00 && m<40)
        {
            printf("\n Grade: F\n");
            gp=0.0;
            failed=true;
        }

        sum=sum+gp;
    }

    if(failed)
    {
        printf("\n You have failed!\n");

    }
    else
    {
        gpa=sum/n;
        printf("\n Grade Point Average (GPA): %.2f\n", gpa);
    }

}
