//print the following pattern:
//5 4 3 2 1
//  4 3 2 1
//    3 2 1
//      2 1
//        1
#include<stdio.h>
void main()
{
int i,j;
for(i=5;i>=1;i--)
{
printf("\n");
for(j=5;j>=i;j--)
{
printf("  ");
}
for(j=i;j>=1;j--)
printf("%d ",j);
}
}