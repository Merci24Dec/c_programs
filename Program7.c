//a program to accept the age of the person and print whether he or she is eligible for voting or not
#include<stdio.h>
void main()
{
float a;
printf("\n Enter the age:");
scanf("%f",&a);
if(a>=18)
printf("\n Eligible for voting");
else
printf("\n Not-Eligible for voting");
}