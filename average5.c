#include<stdio.h>
int main()
{
int b,i,s=0;
scanf("%d",&b);
int a[b];
for(i=1;i<=b;i++)
{
scanf("%d",&a[i]);
printf("%d ",a[i]);
  s=s+a[i];
}
s=s/b;
  printf("the average value is %d",s);
return 0;
}
