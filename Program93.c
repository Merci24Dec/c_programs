//Accept a string and find out it in reverse order.
#include<string.h> 
#include<stdio.h>
void main()
{
char s[20];
printf("\n Enter a string : ");
gets(s);
printf("\n Reversed string : ");
strrev(s);
printf("%s",s);
}