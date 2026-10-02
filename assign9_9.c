#include<stdio.h>
void findelement(int arr[],int n,int *smallest,int *largest,int *secondsmallest,
    int *secondlargest,int *count)
{
    int i;
    *count = 0;
    for(i=0;i<n;i++)
    {
        int j,duplicate=0;
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                duplicate=1;
                break;  
    }
}
if(duplicate)
continue;
(*count)++;
if(*count==1)
{
    *smallest=arr[i];
    *largest=arr[i];
}
else
{
    if(arr[i]<*smallest)
    {
        *secondsmallest=*smallest;
        *smallest=arr[i];
    }
    else if(arr[i] != *smallest && (arr[i]<*secondsmallest || *count==2))
    {
        *secondsmallest=arr[i];
    }
    if(arr[i]>*largest)
    {
        *secondlargest=*largest;
        *largest=arr[i];
    }
    else if(arr[i] != *largest && (arr[i]>*secondlargest || *count==2))
    {
        *secondlargest=arr[i];
    }
}
}
}    
int main()
{
    int arr[100],n,i,smallest,largest,secondsmallest,secondlargest,count;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    findelement(arr,n,&smallest,&largest,&secondsmallest,&secondlargest,&count);
    if(count<2)
    {
        printf("There are not enough distinct elements in the array.\n");
    }
    else
    {
        printf("Smallest element: %d\n",smallest);
        printf("Second smallest element: %d\n",secondsmallest);
        printf("Largest element: %d\n",largest);
        printf("Second largest element: %d\n",secondlargest);
    }
    return 0;
}