#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("\n Enter the a value:");
scanf("%d",&a);
b=a/100;
c=a%100;
d=c/10;
e=c%10;
printf("\n The number is:%d %d %d",b,d,e);
return 0;
}
