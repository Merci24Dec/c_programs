//a program to accept 10 elements in an array and print change the 5th element with a new value
#include<stdio.h>
void main()
{
int a[10],i,pos,n;
printf("Enter 10 elements in the array");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("\n Enter the location where you wish to insert an element");
scanf("%d",&pos);
printf("\n Enter the value to insert \n");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
if(i==pos)
a[i]=n;
}
printf("\n Resultant array is");
for(i=0;i<10;i++)
printf("%d\n",a[i]);
}
