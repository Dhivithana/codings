#include<stdio.h>
void main()
{
int a,b;
printf("\n Enter the first number:");
scanf("%d",&a);
printf("\n Enter your second number:");
scanf("%d",&b);
printf("\n The values before swap:%d %d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("\n The values after swap:%d %d",a,b);
}
