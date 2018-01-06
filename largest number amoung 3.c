#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b|a>c)
{
printf("a is grater valuve%d \n",a);
}
elseif(b>a|b>c)
{
printf("b is greater valuve%d \n",b);
}
else
{
printf("the c is greater value%d \n",c);
}
return 0;
}
