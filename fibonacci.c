#include<stdio.h>
int main()
{
int n;
printf("\nenter the limit for this series");
scanf("%d",&n);
int a=0,b=1;
printf("\n%d\t%d",a,b);
int t;
for(int i=0;i<n;i++)
{
t=a+b;
a=b;
b=t;

printf("\t%d\t",b);
}
return 0;
}
