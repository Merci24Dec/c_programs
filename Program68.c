//accept two numbers and interchange their value(Call by value)
#include<stdio.h>
int swap(int x,int y);
void main()
{
int a,b;
printf("\n Enter any two numbers");
scanf("%d%d",&b,&a);
swap(a,b);
printf("\n After Swapping first=%d , second=%d",a,b);
}
int swap(int x, int y)
{
int t;
t=x;
x=y;
y=t;
}