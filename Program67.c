//accept the two numbers and find out sum (function without argument with return value)
#include<stdio.h>
int sum();
void main()
{
int s;
s = sum();
printf("\n Sum = %d",s);
}
int sum()
{
int a,b,c;
printf("\n Enter two nos");
scanf("%d%d",&a,&b);
c=a+b;
return(c);
}