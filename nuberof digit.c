#include<stdio.h>
int main()
{
int a,s=0;
scanf("%d",&a);
while(a!=0)
{
a=a/10;
s++;
}
printf("%d",s);
return 0;
}
