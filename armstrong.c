#include<stdio.h>
void main()
{
int n,r,x,s;
printf("Armstrong numbers are\n");
for(n=1;n<=1000;n++)
{
s=0;
x=n;
while(x!=0)
{
r=x%10;
s=s+r*r*r;
x=x/10;
}


if(s==n)
{
printf("armstrong number is=%d\n",n);
}
}
}
