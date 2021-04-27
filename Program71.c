//accept a no and find out the factorial using recursion
#include<stdio.h>
long int fact(int x);
void main()
{
int n,f;
printf("\n Enter a number: ");
scanf("%d",&n);
f=fact(n);
printf("\n factorial of given number is %d",f);
}
long int fact(int x)
{
if(x<=1)
return(1);
else
return(x*fact(x-1));
}