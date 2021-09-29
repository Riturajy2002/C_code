#include<stdio.h>
#include<conio.h>
#define max 20
void main()
{
int a[max],i,j,pos;
printf("enter the limit :");
scanf("%d",&j);
if(j>max)
{
printf("overflow condition ");
}
printf("enter the elements of the array:");
for(i=0;i<j;i++)
{
scanf("%d",&a[i]);
}
printf("enter the postion which element you want to delete:");
scanf("%d",&pos);
for(i=pos-1;i<j-1;i++)
{
a[pos-1]=a[i+1];
}
j--;
printf("the element of the array after deletion at the given postion:");
for(i=0;i<j;i++)
{
printf("%d\t",a[i]);
}
getch();
}
