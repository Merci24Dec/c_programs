//accept a number and find out its factorial.
#include<stdio.h>
void main()
{
int n,*p,f=1,i;
p=&n;
printf("\n Enter a number : ");
scanf("%d",p);
for(i=1;i<=*p;i++)
{
f=f*i;
}
printf("Factorial of the given number is %d",f);
}