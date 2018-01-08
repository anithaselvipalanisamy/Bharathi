#include<stdio.h>
int main()
{
char s;
scanf("%s",&s);
if(((s>='a') && (s<='z')) || ((s>='A') && (s<='Z')))
{
printf("\n the given is alphabet");
}
else
{
printf("\n it is not alphabet");
}
return 0;
}
