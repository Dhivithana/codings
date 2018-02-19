#include<stdio.h>
void main()
{
int i,j,a[20],s=0;
printf("\n Enter your numbers:");
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=9;i++)
{
if(a[i]>s)
{
s=a[i];
}
}
printf("\n The maximum number is:%d",s);
}
