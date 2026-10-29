#include<stdio.h>

void display(void)
{
  auto int a=0;
  static int s=0;

  a++;
  s++;

  printf("Automatic = %d,Static = %d\n",a,s);
}

int main(void)
{
    display();
    display();
    display();

    return 0;
}