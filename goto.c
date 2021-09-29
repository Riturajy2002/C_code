#include<stdio.h>
void main()
{
int i,sum=0;
for(i=1;i<=10;i++)
{
sum=sum+i;
if(i==5)
goto label;
}
label:
printf("Sum is %d",sum);
}
