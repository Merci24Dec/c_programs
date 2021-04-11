//a program to accept opening and closing meter reading and produce the bill accordingly
//  units used       <150   - 2.50
//  units used >150 & <250 - 4.30 
//  units used       >250   - 5.40
#include<stdio.h>
void main()
{
int omr,cmr;
int uu;float eb,fr=60;
printf("\n Enter opening meter reading & closing meter reading");
scanf("%d%d",&omr,&cmr);
uu=cmr-omr;
if(uu<150)
eb=fr+uu*2.50;
else if(uu>150 && uu<250)
eb=fr+150*2.50+(uu-150)*4.30;
else if(uu>250)
eb=fr+150*2.50+100*4.30+(uu-250)*5.40;      
printf(" opening reading %d",omr);
printf("\n closing meter reading %d",cmr);
printf("\n unit used %d",uu);
printf("\n Electric Bill = %f",eb);
} 