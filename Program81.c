//a program to accept 5 elements in an array and arrange them in descending order
#include<stdio.h>
void main()
{
int a[5],i,j,t;
printf("Enter 5 elements in the array:\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<5;i++)
{
for(j=i+1;j<=5;j++)
{
if(a[i]<a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("\n Resultant array is:\n");
for(i=0;i<5;i++)
printf("%d\n",a[i]);
}
