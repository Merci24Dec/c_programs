//Accept a number and print sum of its digits
#include<stdio.h>
void main()
{
int n,i,r,s=0;
printf("Enter any number\n");
scanf("%d",&n);
while(n>0)
{
r=n%10;
s=s+r;
n=n/10;
}
printf("Sum is %d\n",s);
}