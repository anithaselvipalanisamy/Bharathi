#include<stdio.h>
int main()
{
int a=0,b=1,t,n;
printf("\n enter the n value")
scan("%d",&n);
printf("%d\t",a);
while(n!=0)
{
t=a+b;
a=b;
b=t;
printf("%d\t",a);
}
return 0;
}
