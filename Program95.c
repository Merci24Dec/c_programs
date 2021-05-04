//Accept a string and check whether palindrome or not. 
#include<stdio.h>
#include<string.h>
void main()
{
char s[20];
int i,l,j,f=1;
printf("\n Enter a String");
gets(s);
l=strlen(s);
for(i=0,j=l-1;i<l/2;i++,j--)
{
if(s[i]!=s[j])
{
f=0;
break;
}
}
if(f==1)
printf("\n Palindrome");
else
printf("\n Not a plandrome");
}