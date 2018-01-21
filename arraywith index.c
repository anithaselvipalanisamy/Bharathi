#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
int a[n];
printf("the array value with its index");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("the number is %d in the position of %d",a[i],i);
}
return 0;
}
