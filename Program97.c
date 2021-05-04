//Accept a string and print the vowels and consonant in it. 
#include<stdio.h>
#include<string.h>
void main()
{
char s[20];int i,l;
printf("\n Enter a String");
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]=='a'||s[i]=='i'||s[i]=='e'||s[i]=='o'||s[i]=='u'||
s[i]=='A'||s[i]=='I'||s[i]=='E'||s[i]=='O'||s[i]=='U')
printf("\n %c is a vowel",s[i]);
else
printf("\n %c is a consonant",s[i]);
}
}