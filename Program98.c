//Pointer concept starts from here.
//A program to store a data in pointer 
#include<stdio.h>
void main()
{
int *p,n=5;
p=&n;
printf("\n %d",n);
printf("\n %d",*p);
printf("\n %d",p);
printf("\n %d",&n);
}