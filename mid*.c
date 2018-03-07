#include<stdio.h>
#include<string.h>
int main()
{
char s[10];
int l1,i,l;
scanf("%s",&s);
l=strlen(s);
l1=l/2;
if(l%2!=0)
{
for(i=0;i<l;i++)
{
s[l1]='*';
printf("%c",s[i]);
}
}
if(l%2==0)
{
for(i=0;i<=l;i++)
{
s[l1]='*';
s[l1-1]='*';
printf("%c",s[i]);
}
}
return 0;
}

