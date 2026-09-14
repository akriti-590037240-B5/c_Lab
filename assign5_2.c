#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,d,r1,r2;
    printf("Enter the coefficients of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    
    if(a==0)
    {
        printf("Invalid equation ");
    }
    else
    {
        d=(b*b)-(4*a*c);
        
        printf("d=%f\n",d);

        if(d>0)
        {
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            printf("Roots are real and distinct\n");
            printf("r1=%f\n",r1);
            printf("r2=%f\n",r2);
        }
        else if(d==0)
        {
            r1=-b/(2*a);
            printf("Roots are real and equal\n");
            printf("r1=r2=%f\n",r1);
        }
        else
        {
            printf("Roots are imaginary\n");
        }
    }
    }
    