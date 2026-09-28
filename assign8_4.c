#include<stdio.h>

int main()
{
    char str[100];
    int i,j,length=0,flag=1;

    printf("Enter a string");
    scanf("%s",str);

    while(str[length] != '\0')
    {
        length++;
    }

    for(i=0,j=length-1;i<j;i++,j++)
    {
        if(str[i] != str[j])
        {
            flag =0;
            break;
        }
    }

    if(flag == 1)
    printf("The string is palindrome.\n");
else
printf("The string is not palindrome.\n");

return 0;
}