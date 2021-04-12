//a program to print the series:-
//              1+(1+2)+(1+2+3)+(1+2+3+4)..........+(1+2+3+......n)
#include<stdio.h>
void main()
{
int i,j,n,ts=0,s;
printf("Enter the number limit");
scanf("%d",&n);
for(i=1;i<n;i++)
s=0;
{
for(j=1;j<=i;j++)
{
s=s+j;
ts=ts+s;
printf("+%d\n",s);
}
}
printf("__________________\n");
printf("\n Total sum=%d",ts);
}