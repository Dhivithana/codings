#include<stdio.h>
#include<string.h>
int main()
{
int n,l,r,c=0,d=0;
printf("\n Enter the the number to check within the interval value:");
scanf("%d",&n);
printf("\n Enter the first interval value:");
scanf("%d",&l);
printf("\n enter the second interval number:");
scanf("%d",&r);
if(n<=l && n>=r)
{
c++;
}
if(n>=l && n<=r)
{
	d++;

}
if(c>0 || d>0)
{
	printf("\n Yes");
}
else
{
	printf("\n No");
}
return 0;
}
