//string functions
#include<stdio.h>
#include<string.h>
void main()
{
char s[20];
int l;
printf("Enter a string\n");
scanf("%s",s);
l=strlen(s);
printf("Length of given string %d\n",l);
}