#include<stdio.h>
int main()
{
int n,n1;
printf("\n Enter the number:");
scanf("%d",&n);
n1=n-1;
if(n%2==0)
{
printf("\n The equal even number is:%d",n);
}
if(n1%2==0)
{
printf("\n The nearest even number is:%d",n1);
}
return 0;
}
