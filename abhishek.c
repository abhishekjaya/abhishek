#include<stdio.h>
int main()
{
int a,b;
float c;
char op;
printf("enter two numbers");
scanf("%d%d",&a,&b);
printf("enter choices");
printf("+ for addition");
printf("- for subtraction");
printf("* for multiplication");
printf("/ for division");
printf("%% for modulus");
scanf(" %c",&op);
if(op=='+')
{
c=a+b;
}
else if(op=='-')
{
c=a-b;
}
else if(op=='*')
{
c=a*b;
}
else if (op=='/')
{
if(b==0)
{
printf("enter non zero");
}
else
{
c=a/b;
}
}
else if(op=='%')
{
if(b==0)
{
printf("enter non zero");
}
else
{
c=a%b;
}
}
else
{
printf("give correct choice");
}
printf("output is %f",c);
return 0;
}
