#include<stdio.h>
int main()
{
int a,b;
printf("\nenter the limits as a and b");
scanf("%d%d",&a,&b);
  printf("\nthe odd number is=");
for(int i=a;i<=b;i++)
{

if(i%2!=0)
{
printf("%d",i);
}
}
return 0;
}

