#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("\n the numbers are a=%d b=%d",a,b);
int t;
t=a;
a=b;
b=t;
printf("\n the value of a=%d and b=%d ",a,b);
return 0;
}
