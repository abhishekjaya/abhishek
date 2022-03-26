#include<stdio.h>
#include<string.h>
void main()
{
char s[20];
int count=0,i;
printf("enter the string");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='0'&&s[i+1]!='0')
count ++;
}
printf("number of words in given strings are:%d",count+1);
return 0;
}


