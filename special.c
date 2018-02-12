#include<stdio.h>
#include<string.h>
void main()
{
int count=1,i,l,al=0,n=0,s=0;
char a[10];
gets(a);
l=strlen(a);
printf("%d\n",l);
for(i=0;i<l;i++)
{
if(a[i]>='a'&&a[i]<='z')
al++;
else if(a[i]>='1'&&a[i]<='9')
n++;
else
s++;
}

printf("%d",s);
}
