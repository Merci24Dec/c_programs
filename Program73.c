//static(storage class)
int fun(int x);
#include<stdio.h>
void main()
{
int i,f;
for(i=1;i<=10;i++)
{
f=fun(i);
printf("\n %d | %d",i,f);
}
}
int fun(int x)
{
static int s = 100;
s=s+x;
return(s);
}