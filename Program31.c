//print the following pattern:
//1 1 1 1 1
//2 2 2 2
//3 3 3
//4 4
//5
#include<stdio.h>
void main()
{
int i,j;
for(i=1;i<=5;i++)
{
printf("\n");
for(j=5;j>=i;j--)
printf("%d ",i);
}
} 