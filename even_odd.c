#include<stdio.h>
int main()
{
int n,m,s;
printf("\n Enter the first numbers:");
scanf("%d",&n);
printf("\n Enter the second numbers:");
scanf("%d",&m);
s=n*m;
if(s%2==0)
{
printf("\n even");
}
else
{
printf("\n Odd");
}
return 0;
}
