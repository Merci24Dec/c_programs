//Arrays start from here
//a program to store 5 numbers in an array
#include<stdio.h>
void main()
{
int a[5],i;
printf("\n Enter 5 numbers");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
printf("\n Element of array");
for(i=0;i<5;i++)
printf("\n %d",a[i]);
}
