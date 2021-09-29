#include<stdio.h>
void main()
{
int a[10];
int i,max;
printf("Enter 10 numbers:");
for(i=0;i<9;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=1;i<9;i++)
{
if(max<a[i])
{
max=a[i];
}
}
printf("greatest number is=%d",max);
}
