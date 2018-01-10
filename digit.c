#include<stdio.h>
int main()
{
int a,s=0;
scanf("%d",&a);
while(a!=0)
{
s++;
a=a/10;
}
printf("\n number of digit is%d",s);
return 0;
}
