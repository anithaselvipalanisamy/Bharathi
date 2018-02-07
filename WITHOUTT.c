#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int i,j,count=0;
char s[100];
gets(s);
j=strlen(s);
for(i=0;i<j;i++)
{
if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
{
count++;
}
}
printf("%d",count);
return 0;
}
