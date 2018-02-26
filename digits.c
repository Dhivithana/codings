#include<stdio.h>
#include<string.h>
int main()
{
char a[50];
int n,c=0,i;
printf("\n Enter the digits:");
scanf("%s",&a);
n=strlen(a);
for(i=0;i<=n;i++)
{
if(a[i]=='0' || a[i]=='1')
{
c++;
}
}
if(n==c)
{
printf("\n Yes");
}
else
{
printf("\n No");
}
return 0;
}
