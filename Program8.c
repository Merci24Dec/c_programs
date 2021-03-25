//a program to accept roll no,name and marks of students in three different subjects and also finding out total score and average score
#include<stdio.h>
void main()
{
	int roll_no,p,c,m,t,avg;
	char name[20];
	printf("\n Enter the roll no:");
	scanf("%d",&roll_no);
	printf("\n Enter your name:");
	scanf("%s",roll_no);
	printf("\n 	Enter the Marks in \nPhysics:-\t Chemistry:-\t Maths:-\t respectively\n");
	scanf("\t\t%d\t%d",&p,&c,&m);
	t=p+c+m;
	avg=t/3;
	printf("\n Total mark%d",t);
	printf("\n Average mark%d",avg);
	if(avg>=60)
	printf("\n 1st class");
	else if (avg>=50 && avg<60)
	printf("\n 2nd class");
	else if(avg>=40 && avg<50)
	printf("\n 3rd class");
	else if(avg<40)
	printf("\n Fail");
}


