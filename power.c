#include<stdio.h>
int main()
{
int power, base,s=1;
scanf("%d",&base);
scanf("%d",&power);
while(power!=0)
{
s=s*base;
power--;
}
printf("the out put is \n %d%d%d", s);
return 0;
}
