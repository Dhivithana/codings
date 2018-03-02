#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
int n,i,c=0;
scanf("%s",&s);
n=strlen(s);
for(i=0;i<n;i++)
{
if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
{
c++;
}
}
if(c>0)
{
printf("\n Yes");
}
else
{
printf("\n No");
}
return 0;
}
