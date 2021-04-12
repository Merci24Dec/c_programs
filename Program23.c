//a program to accept upto n numbers and print sum of all even and odd numbers separately
#include<stdio.h>
void main()
{
int i ,n,os=0,es=0;
printf("\n Enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0)
es=es+i;
else
os=os+i;
}
printf("\n Sum of all odd numbers=%d",os);
printf("\n Sum of all even numbers=%d",es);
} 