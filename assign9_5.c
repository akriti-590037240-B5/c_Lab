#include<stdio.h>

int calculate(int m1,int m2,int m3,int m4,int m5)
{
    int total;
    total = m1 + m2 + m3 + m4 + m5;
    return total;
}

float percentage(int total)
{
    float per;
    per = (total/500.0)*100;
    return per;
}

char grade(float per)
{
    if(per>=90)
        return 'A';
    else if(per>=80)
        return 'B';
    else if(per>=70)
        return 'C';
    else if(per>=60)
        return 'D';
    else if(per>=50)
        return 'E';
    else
        return 'F';
}

int  checkpass(int m1,int m2,int m3,int m4,int m5)
{
    if(m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40)
        return 0;
    else
        return 1;
}

int main()
{
    int m1,m2,m3,m4,m5,total;
    float per;
    char g;
    printf("Enter marks of five subjects:");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    total = calculate(m1,m2,m3,m4,m5);
    per = percentage(total);
    g = grade(per);
    if(checkpass(m1,m2,m3,m4,m5)==1)
        printf("Total=%d\nPercentage=%.2f\nGrade=%c\nResult=Pass\n",total,per,g);
    else
        printf("Total=%d\nPercentage=%.2f\nGrade=%c\nResult=Fail\n",total,per,g);
    return 0;
}