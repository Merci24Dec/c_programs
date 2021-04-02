//a program to accept a character and and print whether it is a vowel or consonant
#include<stdio.h>
void main()
{
char ch;
printf("\n Enter a charcter");
scanf("%c",&ch);
switch(ch)
{
case 'A':
case 'a':printf("\n vowel");
break;

case 'E':
case 'e':printf("\n vowel");
break;

case 'I':
case 'i':printf("\n vowel");
break;

case 'O':
case 'o':printf("\n vowel");
break;

case 'U':
case 'u':printf("\n vowel");
break;

default:printf("\n consonant");
break;
}
}