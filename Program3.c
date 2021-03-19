//a program in c to find the sum and mean of n numbers
#include<stdio.h>
void main()
{
	int n,num,i=0,s=0;
	float avg;
	scanf("%d",&n);
	while (i<n)
	{
	scanf("%d",&num);
	s=s+num;
	i++;
	}
	avg=(float)s/n;
	printf("\n Sum & Average of the %d numbers are %d and %.2f respectively",n,s,avg);
}