#include<stdio.h>

#include<string.h>

int main()

{

char s[20];

int k,i;

printf("\n Enter the string:");

gets(s);

printf("\n Enter the number:");

scanf("%d",&k);

for(i=0;i<=k-1;i++)

{

printf("%c",s[i]);

}

return 0;

}

