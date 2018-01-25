#include<stdio.h>
int main()
{
int a=0;
char str[100];

for(int i=0;i<=100;i++)
{
scanf("%s",&str);
printf("%s",str);

if(str[i]!='')
{
a++;
}
}
printf("\n the number of words in given sentance%d",a);
return 0;
}
