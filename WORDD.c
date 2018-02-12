#include<stdio.h>
#include<string.h>
int main()

{
int count=0,c=0;
char array[100];
gets(array);
int h=strlen(array);
for(int i=0;i<h;i++)
{
if(array[i]!=' ')
{
count++;
}
else
{
c++;
}
}
c=c+1;
printf("\n number of words %d ",c);
return 0;
}
