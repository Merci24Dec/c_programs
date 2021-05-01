// accept elements in an 3x3 2D array and print diagonal terms
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
printf("\n Resultant array is:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i==j)
printf("\n%d",a[i][j]);
else
printf(" ");
}
}
}