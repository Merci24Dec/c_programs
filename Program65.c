//accept the two numbers and find out sum(function with argument)
void sum(int x, int y);
void main()
{
int a,b;
printf("\n Enter two numbers");
scanf("%d%d",&a,&b);
sum(a,b);
}
void sum(int x,int y)
{
int z;
z=x+y;
printf("\n Sum = %d",z);
}