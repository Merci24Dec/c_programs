//local variable & global variable
#include<stdio.h>
int x=10;
void fun(int y);
void main()
{
int x=20;
fun(x);
}
void fun(int y)
{
int s=0,s1=0;
s=s+y;
s1=s1+x;
printf("\n Sum global=%d",s);
printf("\n Sum local=%d",s1);

}

