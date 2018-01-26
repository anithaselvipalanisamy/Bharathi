#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
gets(str);
puts(str);
int l=strlen(str);
for(int i=0;i<=l;i++)
{
if((str[i]>='a')&&(str[i]>='A')&&(str[i]<='z')&&(str[i]<='Z'))
{
printf("\n given string contain only alphabets%s",str);
}
else
{
printf("\n given string contain numbers  also %s",str);
}
return 0;
}
}
