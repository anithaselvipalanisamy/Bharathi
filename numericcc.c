#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char a[100];int i,l,c=0;
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]>='0'&& a[i]<='9')
{
c++;
}
}
printf("%d",c);
return 0;
}
