#include<stdio.h>

struct Employee
{
    int id;

    union
    {
        int hourlyrate;
        int salary;
    };
};

int main()
{
    struct Employee e;

    e.id = 101;
    e.hourlyrate = 20;
    e.salary = 50000;

    printf("Employee ID: %d\n", e.id);
    printf("Salary: %d\n", e.salary);

    return 0;
}