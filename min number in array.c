#include<stdio.h>
int main()
{
int min.,loc,n;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(int j=1;j<n;j++)
{
if(min<a[j])
{
a[j]=min;
loc=j+1;
}
printf("the location is ==%dthe min value is==%d",min,loc);
}
return 0;
}
