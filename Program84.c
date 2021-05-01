// accept elements in an 3x3 2D array and print sum of its row elements
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
int rs=0;
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
rs=rs+a[i][j];
}
printf("rowsum = %d\n",rs);
}
}