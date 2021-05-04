//Accept a string and find out it in reverse order by using a user defined function. 
#include<stdio.h>
#include<string.h>
void reverse (char s[]);
void main()
{
char s[20];
printf("\n Enter a string : ");
gets(s);
reverse(s);
}
void reverse(char s[])
{
int i,l;
l=strlen(s);
printf("\n Reversed string : ");
for(i=0;s[i]!='\0';i++);
for(i=l-1;l>0;l--)
{
printf("%c",s[i]);
}
}
