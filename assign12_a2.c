#include<stdio.h>

struct Student 
{
    int roll;
    char name[50];
    float marks[3];
    float average;
};

int main()
{
    struct Student s[100];
    int n;
    float highest = 0;

    printf("Enter number of students:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("\n Enter details of student %d:\n",i+1);

        printf("Enter roll number");
         scanf("%d",&s[i].roll);

         printf("Enter student name");
         scanf("%49s",s[i].name);

         float total =0.0;

          for(int j=0;j<3;j++)
    {
        printf("Enter marks of three subjects\n");
        scanf("%f",&s[i].marks[j]);
        total += s[i].marks[j];
    }
    s[i].average = total/3;

    if(s[i].average > highest)
    highest = s[i].average;
    }

    printf("\nStudents with highest average :\n");

    for(int i=0;i<n;i++)
    {
        if(s[i].average == highest)
        {
            printf("\nRoll:%d",s[i].roll);
            printf("\nName:%s",s[i].name);
                printf("\nAverage : %.2f\n",s[i].average);
        }
    }
        return 0;
}
            