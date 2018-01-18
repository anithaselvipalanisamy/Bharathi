#include<stdio.h>
int main()
{
int b,a,s=0;
b=a;
printf("enter the number");
scanf("%d",&a);
while(a!=0)
{
s=s*10;
s=s+a%10;
a=a/10;
}
if(s==b)
{
printf("the number is palindrome%d",s);
}
else
{
printf("the number is not palindrome%d",s);
}
return 0;
}
