#include<stdio.h>
int main()
{
int a,s=0,b,t;
printf("enter the number ");
scanf("%d",&a);
b=a;
while(a!=0)
{
t=a%10;
s=s+t*t*t;
a=a/10;
}
if(s==b)
{
printf("the number is amstrong%d ",s);
}
else
{
printf("the number is not amstrong%d ",s);
}
return 0;
}
