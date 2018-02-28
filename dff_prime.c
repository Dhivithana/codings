#include<stdio.h>
int main()
{
int n,m,a;
printf("\n Enter the first number:");
scanf("%d",&n);
printf("\n enter the second number:");
scanf("%d",&m);
a=n-m;
if(a%2==0)
{
printf("\n Even");
}
else
{
printf("\n Odd");
}
return 0;
}
