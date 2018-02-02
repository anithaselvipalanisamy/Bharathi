#include<stdio.h>
int main()
{
float a,s,d,n;
scanf("%f%f%f",&a,&d,&n);
printf("\n the initial value is %.2f ,the difference is %.2f ,the total number of value is %.2f ",a,d,n);
s=(n*(2*a+(n-1)*d))/2;
printf("\n the sum of arithemtic progression is %.2f ",s);
return 0;
}
