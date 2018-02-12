#include<stdio.h>
#include<string.h>
int main()
{
int count=0,i,l;
char a[100];
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]=='.')
{
count++;
}
}
printf("%d",count);
return 0;
}
