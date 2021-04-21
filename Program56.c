//print the corresponding decimal number to binary number
#include<stdio.h>
void main()
{
int n,i,a[40];
printf("Enter any number");
scanf("%d",&n);
for(i=0;n>0;i++)    
{    
a[i]=n%2;    
n=n/2;    
}    
printf("\nBinary of Given Number is=");    
goto display;
display: 
{
for(i=i-1;i>=0;i--)        
printf("%d",a[i]);    
}
}