//print sum of all no 1-n (1+2+.......n)
#include<stdio.h>
void main()
{
int n,i,s=0;
printf("\n Enter a no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
s=s+i;
printf("\n%d",i);
}
printf("\n____________\n");
printf("Sum=%d",s);
}