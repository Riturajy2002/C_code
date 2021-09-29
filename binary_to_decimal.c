#include<stdio.h>
#include<math.h>
void main()
{
int bin,i=0,s=0;
printf("Enter a binary number:");
scanf("%d",&bin);
while(bin)
{
s=s+pow(2,i)*(bin%10);
bin=bin/10;
i++;
}
printf("Decimal equivalent value is=%d",s);
}
