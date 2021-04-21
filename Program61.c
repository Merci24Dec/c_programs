//string functions
#include<stdio.h>
#include<string.h>
void main()
{
char s1[20],s2[20];
printf("Enter first string\n");
gets(s1);
printf("Enter second string\n");
gets(s2);
strcpy(s1,s2);
printf("First and second string after change\n");
puts(s1);
puts(s2);
}