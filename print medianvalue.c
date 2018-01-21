#include<stdio.h>
int main()
{
int n,i,j;
float med;
scanf("%d",&n);
int a[n];

printf("\nthe stored value are");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("%d  ",a[i]);
}
for(j=0;j<n;j++)
{
med=med+a[j];
}

med=med/n;
printf("\n the median valuve is %f",med);

return 0;
}
