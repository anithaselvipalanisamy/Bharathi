#include<stdio.h>
#include<strng.h>
int main()
{
int i;
char str[100];
gets(str);
puts(str);
int l=strlen(str);
for(i=0;i<=l;i++)
{
if(s[i]>='a'||s[i]>='A'||s[i]<='z'||s[i]<='Z')
{
printf("\n given string is character only");
}
else
{
printf("\nthe given string contan number");
}
}
return 0;
}
