#include<stdio.h>
int main()
{
int n,i;
printf("\n Enter the number:");
scanf("%d",&n);
for(i=n; ;i++)
{
	if(i%10==0)
	{
		printf("\n the nearest multiple of 10 is:%d",i);
		break;
	}
}
return 0;
}
