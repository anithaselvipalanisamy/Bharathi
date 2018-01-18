#include<stdio.h>
int main()
{
int a,b;
printf("enter the limits");
scanf("%d%d",&a,&b);
printf("the even numbers are=");
for(int i=a;i<=b;i++)
{
if(i%2==0)
{
printf("  %d",i);
}
}
return 0;
}
