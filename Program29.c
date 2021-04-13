//print the following pattern:
//5 5 5 5 5 
//4 4 4 4
//3 3 3
//2 2
//1
#include<stdio.h>
void main()
{
int i,j;
for(i=5;i>=1;i--)
{
printf("\n");
for(j=1;j<=i;j++)
printf("%d ",i);
}
} 