#include<stdio.h>
#include<limits.h>

int main()
{
int n,i;
int largest=INT_MIN,secondLargest=INT_MIN;
int smallest= INT_MAX,secondSmallest=INT_MAX;

printf("Enter number of elements: ");
scanf("%d",&n);

int arr[n];

printf("Enter elements:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);

    if(arr[i]>largest)
    {
        secondLargest= largest;
        largest=arr[i];
    }
    else if(arr[i]>secondLargest && arr[i]!= largest)
    {
        secondLargest=arr[i];
    }

    if(arr[i]<smallest)
    {
        secondSmallest=smallest;
        smallest = arr[i];
    }
    else if(arr[i]<secondSmallest && arr[i] != smallest)
    {
        secondSmallest=arr[i];
    }
}

printf("Largest = %d\n",largest);
printf("SecondLargest = %d\n",secondLargest);
printf("Smallest = %d\n",smallest);
printf("SecondSmallest = %d\n",secondSmallest);

return 0;
}