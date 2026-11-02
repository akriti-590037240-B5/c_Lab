#include<stdio.h>

struct Student 
{
    int rollno;
    char name[50];
    float marks[3];
    char grade;
};

void displayStudent(struct Student s) 
{
    printf("Roll Number: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
}

float totalmarks(struct Student s) 
{
    float total = 0;
    for(int i = 0; i < 3; i++)
    {
        total += s.marks[i];
    }
    return total;
}   

void updateGrade(struct Student *s,char newGrade) 
{
    s->grade = newGrade;
}

int main() 
{
    struct Student s1;

    printf("Enter Roll Number: ");
    scanf("%d", &s1.rollno);
    printf("Enter Name: ");
    scanf("%s", s1.name);
    printf("Enter Marks for 3 subjects: ");
    for(int i = 0; i < 3; i++)
    {
        scanf("%f", &s1.marks[i]);
    }
    printf("Enter Grade: ");
    scanf(" %c", &s1.grade);
    
    displayStudent(s1);
    
    float total = totalmarks(s1);
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", total / 3);
    
    char newGrade;
    printf("Enter new Grade: ");
    scanf(" %c", &newGrade);
    
    updateGrade(&s1, newGrade);
    
    printf("Updated Grade: %c\n", s1.grade);

    return 0;
}