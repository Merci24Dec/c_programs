//print the following series
//+1!
//+2!
//+3!
//+4!
//+5!
//.
//.
//.
//.
//+n!=total
#include<stdio.h>
void main()
{
int fact,n,i,j,s=0;
printf("Enter the limit");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=1;
if(i!=n)
printf("+%d!\n",i);
else
printf("+%d!\n",i);
for(j=1;j<=i;j++)
fact=fact*j;
s=s+fact;
}
printf("__________\n");
printf("%d",s);
}
