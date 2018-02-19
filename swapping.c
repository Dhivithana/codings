#include<stdio.h>
void main()
{
int a,b,t;
printf("\n Enter the first number:");
scanf("%d",&a);
printf("\n Enter your second number:");
scanf("%d",&b);
printf("\n The values before swap:%d %d",a,b);
t=a;
a=b;
b=t;
printf("\n The values after swap:%d %d",a,b);
}
