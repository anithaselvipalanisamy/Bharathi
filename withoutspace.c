#include<stdio.h>
int main()
{
int i=0,count=0;
int str[100];
while(str[i]!=" ")
{
count++;
i++;
}
while(str[i]!='\0')
{
count++;
i++;
}
printf("%d",count);
return 0;
}
