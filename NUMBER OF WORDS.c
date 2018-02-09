#include<stdio.h>
#include<string.h>
int main()
{
int i,k,count=0;
char a[100];
gets(a);
k=strlen(a);
for(i=0;i<k;i++)
{
if(a[i]==' ')
{
count++;
}
}
printf("count%d",count);
return 0;
}
