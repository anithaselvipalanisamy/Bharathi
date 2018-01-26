#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
printf("the given number is %d",n);
if(n%2==0)
{
printf("\nthe give number is also even");
}
else
{
n--;
printf("\n the number is %d which satisfy the condtion lessthan or equal to %d",n,++n);
}
return 0;
}
