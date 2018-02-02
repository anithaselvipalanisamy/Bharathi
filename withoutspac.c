#include<stdio.h>
int main()
{
int i,j=0,count=0,n;
scanf("%d",&n);
char a[n];
for(i=0;i<n;i++)
{
scanf("%c",&a[i]);
printf("%c",&a[i]);
}
for(i=0;i<n;i++)
{
if(while(a[i]!='\t'))
{
count++;
}
else
{
j++;
}
}
printf("\nthe number of character is = %d and number of space = %d ",count,j);
return 0;
}
