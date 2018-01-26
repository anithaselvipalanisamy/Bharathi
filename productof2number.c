#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("\nthe values are %d and %d",a,b);
int c=a*b;
if(c%2==0)
{
printf("\n the product is even %d",c);
}
else
{
printf("\n the product is odd %d",c);
}
return 0;
}
