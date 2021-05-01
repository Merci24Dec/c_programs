// accept elements in an 3x3 2D array and print sum of its column elements
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
int cs=0;
printf("\n");
for(j=0;j<3;j++)
{
printf("%d\t",a[j][i]);
cs=cs+a[j][i];
}
printf("colsum = %d",cs);
}
}
//