#include<stdio.h>

 void reverse(int arr[],int l,int r);
void reverse(int arr[],int l,int r)
{
    int temp;
    if(l>=r)
    return;
temp=arr[l];
arr[l]=arr[r];  
arr[r]=temp;
reverse(arr,l+1,r-1);
}

int main()
{
    int  arr[100],n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    if(n<=0 || n>100)
    {
        printf("Invalid input. Please enter a positive integer less than or equal to 100.\n");
        return 1;
    }
    
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,0,n-1);
    printf("Reversed array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");   
    return 0;
}