#include<stdio.h>
void main()
{
int a[10],i,j,temp,min,max;
printf("enter the minimum value of range:");
scanf("%d",&min);
max=min+9;
srand();
for(i=0;i<=9;i++)
{
temp=rand()%10+min;
for(j=0;j<=i-1;j++)
{
if(temp==a[j])
{
break;
}
}
if(i==j)
{
a[i]=temp;
}
else
{
i--;}
}
for(i=0;i<=9;i++)
{
printf("%d\t",a[i]);
}
}
