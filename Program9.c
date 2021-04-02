//Accept the age of a person and print whether it is teenager young or old
#include<stdio.h>
void main()
{
int age;
printf("\n Enter the age of a person ");
scanf("%d",&age);
if(age>0 && age<13)
printf("\n Child");
if(age>=13 && age<19)
printf("\n Teenager");
if(age>=19 && age<40)
printf("\n Young");
if(age>=40)
printf("\n Old");
}


