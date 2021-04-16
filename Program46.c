//accept a no and find out it's factorial 
#include<stdio.h>
void main()
{
long int n,f=1;
printf("\n Enter a number");
scanf("%d",&n);
while(n>0)
{
f=f*n;
n--;
}
printf("\n Factorial of entered number %ld",f);
}