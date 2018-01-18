#include<stdio.h>
int main()
{
int a,n,b;
printf("\nenter the number a=");
scanf("%d",&a);
printf("\nenter the limit of multiples n=");
scanf("%d",&n);
printf("\nthe output is=");
for(int i=1;i<=n;i++)
{
b=a*i;
printf("%d  ",b);
}
return 0;
}
