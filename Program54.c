//print 1-10
#include<stdio.h>
void main()
{
int n=1;
display:
{
printf("\n %d",n);
n++;
}
if(n<=10)
goto display;
}