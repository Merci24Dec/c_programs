//a program to accept 10 elements in an array and print change the 5th element with a new value
#include<stdio.h>
void main()
{
int a[10],i,pos,value;
printf("Enter 10 elements in the array");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("\n Enter the location where you wish to insert an element\n");
scanf("%d",&pos);
printf("\n Enter the element to insert \n");
scanf("%d",&value);
for(i=10-1;i>=pos-1;i++)
{
a[i+1]=a[i];
a[pos-1]=value;
}
printf("\n Resultant array is");
for(i=0;i<10;i++)
printf("\n%d",a[i]);
}
