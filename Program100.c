//accept two numbers and find the sum.
#include<stdio.h>
void main()
{
int a,b,c,*p,*q;
p=&a;
q=&b;
printf("Enter any two numbers : ");
scanf("%d%d",p,q);
c=*p+*q;
printf("\n sum is %d",c);
}