#include<stdio.h>
int main()
{
int i,a,b;
printf("\n enter the limits a and b");
scanf("%d%d",&a,&b);
for(i=3;i<=b;i++)
{
if(i%2==0)
{
prnitf("\n the number is prime%d",i);
}
else
{
printf("\n the number is not a prime%d",i);
}
}
return 0;
}

