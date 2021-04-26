//accept two numbers and interchange their value(call by reference/address)
#include<stdio.h>
int swap(int *x,int *y);
void main()
{
int a,b;
printf("\n Enter any two numbers");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("\n After Swapping first=%d , second=%d",a,b);
}
int swap(int *x, int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}