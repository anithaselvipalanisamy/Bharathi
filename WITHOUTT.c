#include<stdio.h>
#include<string.h>
int main()
{
int i,count=0;
char s[100];
for(i=0;i<n;i++)
{
scanf("%s",s[i]);
}
for(i=0;i<'\0';i++)
{
if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
{
count++;
}
}
printf("%d",count);
return 0;
}
