//2D arrays starts from here
// accept elements in an 3x4 2D array and print it
#include<stdio.h>
void main()
{
int a[3][4],i,j;
printf("Enter elements in the 3x4 array\n");
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n Resultant array is:\n");
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
}