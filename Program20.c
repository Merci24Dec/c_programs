//a program to accept a no and find out factorial
//(1*2*3*4*......n)
#include<stdio.h>
void main()
{
int n,i,f=1;
printf("\n Enter a no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f*=i;
}
printf("\n factorial of %d",f);
}