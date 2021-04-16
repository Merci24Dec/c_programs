//Accept a number and print whether it is a armstrong number or not 
#include<stdio.h>
#include<math.h>
void main()
{
int n,x,y,s=0;
printf("Enter any number\n");
scanf("%d",&n);
y=n;
while(n>0)
{
x=n%10;
s=s+x*x*x;
n=n/10;
}
if(y==s)
printf("It is an armstrong number");
else
printf("It is not an armstrong number");
}