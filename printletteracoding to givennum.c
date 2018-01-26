#include<stdio.h>
int main()
{
int m,n;
scanf("%d%d",&m,&n);
printf("/n%d %d",m,n);
int c=m-n;
printf("\n the difference is %d",c);
if(c%2==0)
{
printf("\neven");

}
else
{
printf("\nodd");
}
return 0;
}
