#include<stdio.h>
int main()
{
int i,n,m;
printf("\n enter the limits");
scanf("%d%d",&m,&n);
for(i=m;i<=n;i++)
{
if(i%2==0)
{
printf("\n the even number is%d",i);
}
}
return 0;
}
