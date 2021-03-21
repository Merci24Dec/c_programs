// a program to accept temperature in celcius and convert it into fahranheit
#include<stdio.h>
void main()
{
	float c;
	scanf("%f",&c);
	printf("\n Temperature in fahranheit is %.3f",(((9*c)/5)+32));
}