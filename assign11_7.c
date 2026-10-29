#include<stdio.h>

int main(void)
{
    int arr[] ={10,20,30,40,50};
    int sum = 0;
    int n = 5;

    for(register int i = 0; i<n;i++)
    {
        sum += arr[i];
    }

    printf("Array elements : 10 20 30 40 50 \n");
    printf("Sum of elements = %d\n",sum);

    return 0;
}