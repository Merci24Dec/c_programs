// accept elements in an 3x3 2D array and print the sum of elements in left diagonal and right diagonal.
#include<stdio.h>
void main()
{
int a[3][3],i,j;
printf("Enter elements in the 3x3 array\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
int ls=0,rs=0;
printf("\n Resultant array is:\n");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
if(i==j)
{
ls=ls+a[i][j];
rs=rs+a[i][2-i];
}
}
}
printf("\n Sum of left diagonal = %d",ls);
printf("\n Sum of right digonal = %d",rs);
}