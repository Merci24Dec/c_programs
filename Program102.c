//a program to accept 5 numbers in an array and print it.
#include<stdio.h>
void main()
{
int a[5],*p,i;
p=a;
printf("\n Enter any five numbers : \n");
for(i=0;i<5;i++)
scanf("%d",(p+i));
printf("\n Elements in array :");
for(i=0;i<5;i++)
printf("%d\n",*(p+i));
}