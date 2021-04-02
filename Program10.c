//accept cost of a laptop and desktop and print the discount.Laptop:-<25000 10%.Desktop:-<1500010%                          
//                                                                   >25000 20%.          >15000 20%
#include<stdio.h>
void main()
{
int opt;
double cp,ds,sp;
printf("\n Choose from LAPTOP(1) or DESKTOP(2):\t");
scanf("%d",&opt);
if(opt==1)
{
printf("Enter the cost of the laptop:\t");
scanf("%lf",&cp);
if(cp<25000)
ds=(cp*10)/100;
else
ds=(cp*15)/100;
sp=cp-ds;
}
else
{
printf("Enter the cost of the desktop:\t");
scanf("%lf",&cp);
if(cp<15000)
ds=(cp*10)/100;
else
ds=(cp*20)/100;
sp=cp-ds;
}
printf("Costprice= %.1lf\t",cp);
printf("Discount= %.1lf\t",ds);
printf("Sellingprice= %.1lf\t",sp);
}

