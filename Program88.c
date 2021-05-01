// accept elements in an 3x3 2D array and print the sum of two arrays elements. 
#include<stdio.h>
void main()
{
int a[3][3],b[3][3],c[3][3],i,j;
printf("\n Enter element in 1st 3x3 array\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n Enter element in 2nd 3x3 array\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("\n Sum of the arrays\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("\n_____________________________________");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
{
printf("%d\t",c[i][j]);
}
}
}