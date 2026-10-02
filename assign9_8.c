#include<stdio.h>
void display(int arr[], int size)
{
    printf("The elements of the array are:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void insertElement(int arr[], int *size, int position, int value)
{
    int i;
    for(i=*size;i>position-1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[position]=value;
    (*size)++;
}
void deleteElement(int arr[], int *size, int position,int *deletedValue)
{
    int i;
    *deletedValue = arr[position];
    for(i=position;i<*size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    (*size)--;
}

int main()
{
    int arr[100],size,choice,position,value,deletedvalue,i;
    printf("Enter the size of the array: ");
    scanf("%d",&size);  
    printf("Enter the elements of the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    do
    {
        MENU:
        printf("\nMenu:\n");
        printf("1. Display the array\n");
        printf("2. Insert an element\n");
        printf("3. Delete an element\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {   
            case 1:
                display(arr,size);
                goto MENU;
            case 2:
                printf("Enter the position to insert the element (0 to %d): ",size);
                scanf("%d",&position);
                if(position<0 || position>size)
                {
                    printf("Invalid position! Please try again.\n");
                    goto MENU;
                }
                printf("Enter the value to insert: ");
                scanf("%d",&value);
                insertElement(arr,&size,position,value);
                printf("Element inserted successfully!\n");
                goto MENU;
            case 3:
                printf("Enter the position to delete the element (0 to %d): ",size-1);
                scanf("%d",&position);
                if(position<0 || position>=size)
                {
                    printf("Invalid position! Please try again.\n");
                    goto MENU;
                }
                deleteElement(arr,&size,position,&deletedvalue);
                printf("Element %d deleted successfully!\n",deletedvalue);
                goto MENU;
                break;
            case 4:
                printf("Exiting the program.\n");
                goto MENU;
            default:
                printf("Invalid choice! Please try again.\n");
                goto MENU;
        }
    }while(choice!=4);
}