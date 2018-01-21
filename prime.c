#include<stdio.h>
int main()
{
int a,i,n,s=0;
printf("enter the number");
scanf("%d",&a);
  for(i=2;i<=a/2;i++)
  {
     if(a%i==0)
    s++;
    break;
   
  }
  
if(s==0)
{
printf("the number is  a prime number%d",a);
}
else
{
printf("the number is not a prime number%d",a);
}
return 0;
}

