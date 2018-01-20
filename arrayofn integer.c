#include<stdio.h>
int main()
{
int n,max,loc;
scanf("%d",&n);
int a[n],i;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(int j=1;j<n;j++)
{
if(a[j]>max)
{
max=a[j];
loc=j+1;
}
}
printf("the max number is=%d is in the location =%d",max,loc);
return 0;
}



