//accept a number and find whether it is a prime number or not
#include<stdio.h>
void main()
{
int n,i,c=0;
printf("\n Enter a no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
c=c+1;
}
if(c==2)
printf("\n prime no");
else
printf("\n not a prime no");
}