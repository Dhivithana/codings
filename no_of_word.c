#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int i,c=0,n;
printf("\n enter");
gets(s);
n=strlen(s);
for(i=0;i<n;i++)
{
if(s[i]==' ');
{
c++;
}
}
printf("\n The number of word is:%d",c+1);
return 0;
}
