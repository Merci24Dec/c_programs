//Accept a string and print its length
#include<string.h>
#include<stdio.h>
void main()
{
char s[20];
int l;
printf("\n Enter a string : ");
gets(s);
l=strlen(s);
printf("\n Entered string length is : %d",l);
}