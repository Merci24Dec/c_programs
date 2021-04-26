//string functions
#include<stdio.h>
#include<string.h>
void main()
{
char s[20];
printf("Enter the string");
gets(s);
strrev(s);
printf("Reverse of the given string");
puts(s);
}