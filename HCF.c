#include<stdio.h>
void main()
{
int H,a,b;
printf("Enter two number:");
scanf("%d%d",&a,&b);
for(H=a<b?a:b;H>=1;H--)
{
if(a%H==0 && b%H==0)
{
break;
}
}
printf("The HCF is=%d",H);
}
