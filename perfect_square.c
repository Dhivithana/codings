#include <stdio.h>
int main()
{
	int a,b,c,i,f=0;
	printf("\n Enter two numbers:");
	scanf("%d%d",&a,&b);
	c=a*b;
	for(i=0;i<=c/2;i++)
	{
		if(i*i==c)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("\n Yes");
	
	}
	else
	{
		printf("\n No");
	}
	return 0;
}
