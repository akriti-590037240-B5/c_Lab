#include<stdio.h>

void findmaxandcount(int arr[],int n,int index,int *max,int *count)
{
    if(index==n)
    {
        return;
    }
    if(arr[index]>*max)
    {
        *max=arr[index];
        *count=1;
    }
    else if(arr[index]==*max)
    {
        (*count)++;
    }
    findmaxandcount(arr,n,index+1,max,count);
}
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);    
}
    int max=arr[0];
    int count=0;
    findmaxandcount(arr,n,0,&max,&count);
    printf("The maximum element in the array is: %d\n",max);
    printf("The count of the maximum element in the array is: %d\n",count);
    return 0;
}