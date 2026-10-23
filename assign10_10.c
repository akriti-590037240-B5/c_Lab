#include<stdio.h>

void towerofHanoi(int n,char source,char destination,char auxiliary)
{
    if(n == 1)
    {
        printf("Move disk 1 from %c to %c\n",source,destination);
        return;
    }
    towerofHanoi(n-1,source,auxiliary,destination);
    printf("Move disk %d from %c to %c\n",n,source,destination);
    towerofHanoi(n-1,auxiliary,destination,source);
}
int main()
{
    int n;
    printf("Enter number of disks: ");
    scanf("%d",&n);

    if(n<1 || n > 15)
    {
        printf("Invalid number of disks");
        return 0;
    }
    towerofHanoi(n,'A','C','B');
    return 0;
}