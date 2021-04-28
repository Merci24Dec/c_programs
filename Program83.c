// accept elements in an 3x3 2D array and print its transpose
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
int b[3][3];
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
b[i][j]=a[j][i];
printf("%d\t",b[i][j]);
}
printf("\n");
}
}