//print the following pattern:
//        5
//      4 5
//    3 4 5
//  2 3 4 5
//1 2 3 4 5
#include<stdio.h>
void main()
{
int i,j;
for(i=5;i>=1;i--)
{
printf("\n");
for(j=1;j<=i;j++)
{
printf("  ");
}
for(j=i;j<=5;j++)
printf("%d ",j);
}
}