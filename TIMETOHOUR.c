#include<stdio.h>
int main()
{
int hr=0,min;
printf("\nenter the minute");
scanf("%d",&min);
if(min%60==0)
{
hr=min/60;
min=min%60;
}
printf("\nthe time is  %dhr %dmin ",hr,min);
return 0;
}
