#include<stdio.h>
int main()
{
int n[50],sum=0,i,n1;
printf("\n Enter total numbers to be added");
scanf("%d",&n1);
printf("\n Enter the number");
for(i=1;i<=n1;i++)
{
scanf("%d",&n[i]);
}
for(i=1;i<=n1;i++)
{
sum=sum+n[i];
}
printf("\n The total sum is:%d",sum);
return 0;
}
