//a program to store 5 numbers in an array and find out the biggest one
#include<stdio.h>
void main()
{
int a[5],i,big=0;
printf("\n Enter 5 nos to array");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
if(big<a[i])
big=a[i];
}
printf("\n Biggest number is %d",big);
}
