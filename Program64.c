//accept the two numbers and find out sum(without argument and without return value)
#include<stdio.h>
void sum();
void main()
{
sum();
}
void sum()
{
int a,b,c;
printf("\n Enter two number");
scanf("%d%d",&a,&b);
c=a+b;
printf("\n Sum= %d ",c);
}