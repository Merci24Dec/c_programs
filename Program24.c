// a program to accept 10 numbers and finding out the greatest among them
#include<stdio.h>
void main()
{
int i,great=0,a[10];
printf("Enter any 10 numbers");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
great=a[0];
for(i=0;i<10;i++)
{
if(a[i]>great)
{
great =a[i];
}
}
printf("Greatest of ten numbers is %d",great);
}