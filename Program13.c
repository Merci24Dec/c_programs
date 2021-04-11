//a program to accept an expression and print it's result.
#include<stdio.h>
void main()
{
int a,b;
char op;float res;
printf("\n enter the expression");
scanf("%d%c%d",&a,&op,&b);
switch(op)
{
case '+':res=a+b;
printf("%d+%d=%.0f",a,b,res);
break;
case '-':res=a-b;
printf("%d-%d=%.0f",a,b,res);
break;
case '*':res=a*b;
printf("%d*%d=%.0f",a,b,res);
break;
case '/':res=a/b;
printf("%d/%d=%.2f",a,b,res);
break;
case '%':res=a%b;
printf("%d%%%d=%.0f",a,b,res);
break;
default: printf("invalid expression");
break;
}
}