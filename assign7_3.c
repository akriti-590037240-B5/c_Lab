#include<stdio.h>

int main()
{
    int n,i,pos,value;

    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter element to be inserted: ");
    scanf("%d",&value);
    printf("Enter position where element to be inserted: ");
    scanf("%d",&pos);   

    if(pos<1 || pos>n+1)
    {
        printf("Invalid position! Please enter position between 1 and %d\n",n+1);
    }
    else
    {
        for(i=n-1;i>=pos-1;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos-1]=value;
        n++;
        printf("Array after insertion: ");
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
    }
}