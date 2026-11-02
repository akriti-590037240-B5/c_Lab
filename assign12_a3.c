#include<stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    int id;
    char name[50];
    float salary;
    struct Date joining;
};

int main()
{
    struct Employee e[3];

    for(int i=0;i<3;i++)
    {
        printf("Enter details of the employee %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
        printf("Joining Date (day month year): ");
        scanf("%d %d %d", &e[i].joining.day, &e[i].joining.month, &e[i].joining.year);
    }

    printf("\nEmployee Details:\n");
    for(int i=0;i<3;i++)
    {
        printf("Employee %d:\n", i+1);
        printf("ID: %d\n", e[i].id);
        printf("Name: %s\n", e[i].name);
        printf("Salary: %.2f\n", e[i].salary);
        printf("Joining Date: %02d/%02d/%04d\n", e[i].joining.day, e[i].joining.month, e[i].joining.year);
        printf("\n");
    }   

    return 0;
}
