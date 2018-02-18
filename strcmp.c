#include<stdio.h>
#include<string.h>
int main()
{
char a[10], b[10]; int i,c=1,l,m,n;
gets(a); gets(b);
l=strlen(a);
m=strlen(b);
printf("\n%d",l);
if(l>=m)
    l=l;
    else
    l=m;
printf("\n%d\n%d",l,m);
for(i=0;i<l-1;i++)
{
if(a[i]==b[i])
{
c++;
}
else
{
printf("\n not same");
break;
}
}
if(l==c)
{
printf("\n same");
}
return 0;
}
