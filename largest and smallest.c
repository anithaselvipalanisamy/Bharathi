#include<stdio.h>
int main()
{
int total,big=0,small=0;
scanf("%d",&total);
int a[total];
for(int i=0;i<total;i++)
{
sacnf("%d",&total[i]);
printf("\t%d",total[i]);
}
big=total[0];
for(int i=1;i<total;i++)
{
if(big<total[i])
{
big=total[i];
}
}
printf("\nthe largest number is%d",big);
small=total[0];
for(int i=0;i<total;i++)
{
if(small>total[i])
{
small=total[i];
}
}
printf("\nthe smallest number is%d",small);
return 0;
}
