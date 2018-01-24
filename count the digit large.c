#include<stdio.h>
int main()
{
int s,t=0;
scanf"%d",&s);
if(s<=100000000000)
{
while(s!=0)
{
s=s/10;
t++;
}
printf("%d",t);
}
return 0;
}
