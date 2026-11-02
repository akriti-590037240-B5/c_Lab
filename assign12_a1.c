#include<stdio.h>

struct Student{
    int roll;
    char name[50];
    float marks[3];
};

int main()
{
    struct Student s;
    float total=0.0;
    float average;
    char grade;

    printf("Enter roll number");
    scanf("%d",&s.roll);

    printf("Enter student name");
    scanf("%49s",s.name);

    printf("Enter marks in three subjects:\n");

    for(int i=0;i<3;i++)
    {
        scanf("%f",&s.marks[i]);
        total += s.marks[i];
    }

    average = total/3;

    if(average >= 90)
    grade = 'A';
    else if(average >= 75)
    grade = 'B';
    else if(average >= 60)
    grade = 'C';
    else if(average >= 40)
    grade = 'D';
    else
    grade = 'F';

    printf("\n--- STUDENT RECORD ---\n");
    printf("Roll number : %d\n",s.roll);
    printf("Name : %s\n",s.name);
    printf("Total marks : %.2f\n",total);
    printf("Average marks :%.2f\n",average);
    printf("Grade : %c\n",grade);

    return 0;
}