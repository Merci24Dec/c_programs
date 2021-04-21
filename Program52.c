//print odd numbers 1-10 
#include<stdio.h>
void main()
{
int i;
for(i=1;i<=10;i++)
{
if (i%2==0)
continue;
printf("\n%d",i);
}
}