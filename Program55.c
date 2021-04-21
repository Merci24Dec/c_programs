//print numbers from 1-50 without 10's
#include<stdio.h>
void main()
{
int i;
for(i=1;i<=50;i++)
{
if(i%10==0)
continue;
printf("\n%d",i);
} 
}