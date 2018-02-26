#include<stdio.h>
int main()
{
int n,m,l;
printf("\n Enter the first number:");
scanf("%d",&n);
printf("\n Enter the second number:");
scanf("%d",&m);
l=n+m;
if(l%2==0)
{
printf("\n Even");
}
else
{
printf("\n Odd");
}
return 0;
}
