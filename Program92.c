//Accept a string and find out its length using udf(user defined function). 
#include<string.h>
#include<stdio.h>
int length (char s[]);
void main()
{
char s[20];
int l;
printf("\n Enter a string : ");
gets(s);
l=length(s);
printf("\n Entered string length is : %d ",l);
}
int length(char s[])
{
int i;
for(i=0;s[i]!='\0';i++);
return(i);
}