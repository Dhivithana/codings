#include<stdio.h>
int main()
{
int n,c=0,i;
printf("\n Enter the number:");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
c++;
}}
if(c==0)
{
printf("\n Yes");
}
else
{
printf("\n No");
}
return 0;
}
