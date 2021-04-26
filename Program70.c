//accept two numbers and find out which one is greater. 
#include<stdio.h>
void great(int x,int y);
void main()
{
int a,b;
printf("\n Enter two numbers");
scanf("%d%d",&a,&b);
great(a,b);
}
void great(int x,int y)
{
if(x>y)
printf("\n greatest number is %d",x);
else
printf("\n greatest number is %d",y);
}