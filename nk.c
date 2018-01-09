#include<stdio.h>
int main()
{
int n,k,i,j,s=0;
scanf("%d%d",&n&k);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
for(j=0;j<k;j++)
{
s=s+j;
}
printf("\n the sum of k digit is %d",s);
return 0;
}

