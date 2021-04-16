//Accept a number and print reverse of it
#include<stdio.h>
void main()
{
int n,r=0,x;
printf("Enter any number\n");
scanf("%d",&n);
while(n>0)
{
x=n%10;
r=r*10+x;
n=n/10;
}
printf("Reverse of entered number %d\n",r);
}