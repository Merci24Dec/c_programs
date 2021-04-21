//print upto 5 from numbers 1-10
#include<stdio.h>
void main()
{
int i;
for(i=1;i<=10;i++)
{
if (i==5)
break;
printf("%d\n",i);
}
}