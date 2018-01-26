#include<stdio.h>
int main()
{
int s,t;
scanf("%d%d",&s,&t);
printf("\n%d%d",s,t);
int a;
a=s;
s=t;
t=a;
printf("\n%d%d",s,t);
return 0;
}
