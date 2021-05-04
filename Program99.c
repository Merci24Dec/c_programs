//accept two number and find out which one is greater.
#include<stdio.h>
void main()
{
int a,b,*p,*q;
p=&a;
q=&b;
printf("Enter any two numbers : ");
scanf("%d%d",&a,&b);
if(*p>*q)
printf("\n %d is greatest\n",*p);
else
printf("\n %d is greatest\n ",*q);
}