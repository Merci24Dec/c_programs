//accept 1-50 and print only 1st 10 even number
#include<stdio.h>
void main()
{
int i,count=0;
for(i=0;i<=50;i+=2)
{
if(count==10)
break;
{
printf("%d\n",i);
count++;
}
}
}