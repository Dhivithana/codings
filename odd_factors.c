#include <stdio.h>
#include<string.h>
int main()
{
 
 char s[100];
 int len,i;
 scanf("%s",s);
 len=strlen(s);
 for(i=0;i<len;i++)
 {
     if((s[i]%2)!=0)
     printf("%c ",s[i]);
 }
  return 0;
}
