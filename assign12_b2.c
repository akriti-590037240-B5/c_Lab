#include<stdio.h>

typedef struct
{
    int day;
    int month;
    int year;
} Date;

typedef struct
{
    int roll;
    char name[50];
    float cgpa;
    Date dob; 
} Student;

void displayStudent(Student *s,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nRoll No: %d",(s+i)->roll);
        printf("\nName: %s",(s+i)->name);
        printf("\nCGPA: %.2f",(s+i)->cgpa);
        printf("\nDate of Birth: %02d/%02d/%04d",(s+i)->dob.day,(s+i)->dob.month,(s+i)->dob.year);

        if((s+i)->cgpa>=9.0)
        printf("Scholarship: Eligible\n");
        else
        printf("Scholarship: Not Eligible\n");
    }
}

int main()
{
    Student s[100];
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter details for student %d:\n",i+1);
        printf("Roll No: ");
        scanf("%d",&s[i].roll);
        printf("Name: ");
        scanf(" %[^\n]s",s[i].name);
        printf("CGPA: ");
        scanf("%f",&s[i].cgpa);
        printf("Date of Birth (dd mm yyyy): ");
        scanf("%d %d %d",&s[i].dob.day,&s[i].dob.month,&s[i].dob.year);
    }
    displayStudent(s,n);
    return 0;
}