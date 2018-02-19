#include<stdio.h>
#include<string.h>
int main()
{
char a[10]; int l,i,c=0;
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]>='0'&&a[i]<='9')
{
c++;
}
else
{
printf("\nnot numeric");
break;
}
}
if(l==c)
{
printf("\n numeric");
}
return 0;
}
