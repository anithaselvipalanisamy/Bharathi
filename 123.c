#include<stdio.h>
int main()
{
char str[100]="one""two""three""four""five""six""seven""eight""nine""ten";
int n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(i==n)
{
printf("\n%d",str[i]);
}
}
return 0;
}
