#include<stdio.h>
void analysestring(char *str,int *vowels,int *consonants,int *digits,int *spaces,int *special)
{
    int i=0;
    char ch;
    *vowels=0;
    *consonants=0;
    *digits=0;
    *spaces=0;
    *special=0;
    while(str[i]!='\0')
    {
        ch=*(str+i);
        if(ch >= 'A' && ch <= 'Z')
        {
            ch=ch+32;
        }
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            (*vowels)++;
        }
        else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
        {
            (*consonants)++;
        }
        else if(ch>='0' && ch<='9')
        {
            (*digits)++;
        }
        else if(ch==' ')
        {
            (*spaces)++;
        }
        else
        {
            (*special)++;
        }
    }
}

int main()
{
    char str[100];
    int vowels,consonants,digits,spaces,special;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    analysestring(str,&vowels,&consonants,&digits,&spaces,&special);
    printf("Vowels: %d\n",vowels);
    printf("Consonants: %d\n",consonants);
    printf("Digits: %d\n",digits);
    printf("Spaces: %d\n",spaces);
    printf("Special characters: %d\n",special);
    return 0;
}