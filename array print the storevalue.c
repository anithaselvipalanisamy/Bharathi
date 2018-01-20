#include<stdio.h>
int main()
{
int n,b,i,j;
scanf("%d",&n);
int a[n];
printf("\n the input of an array is");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n the output of an array is");
for(j=0;j<n;j++)
{
printf("%d",a[j]);
}
return 0;
}
