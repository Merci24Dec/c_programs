//accept the two numbers and find out sum (function with argument with return value)
#include<stdio.h>
int sum(int x, int y);
void main()
{
int a,b,s;
printf("\n Enter two numbers");
scanf("%d%d",&a,&b);
s=sum(a,b);
printf("\n Sum = %d",s);
}
int sum(int x,int y)
{
int z;
z=x+y;
return(z);
}