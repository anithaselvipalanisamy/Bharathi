#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int d=n;
int s=0,t,m;
while(n!=0)
{
s=s*10;
s=s+n%10;
n=n/10;
}
while(s!=0)
{
t=s%10;
s=s/10;
printf("\t%d",t);
}
return 0;
}

