//register(storage class)
#include<stdio.h>
int fun(int x);
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
register int s;
s=100;
s=s+x;
return(s);
}