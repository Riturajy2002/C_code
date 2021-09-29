#include<stdio.h>
#include<conio.h>
#define max 20
void main()
{
int a[max], i,j;
printf("enter the limit:");
scanf("%d",&j);
if(j>max)
{
printf("overflow condition");
}
printf("enter the elements of the array:");
for(i=0;i<j;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<j;i++)
{
a[i]=a[i+1];


}
j--;
printf("the elements of the array after deletion a element at the beginning:");
for(i=0;i<j;i++)
{
printf("%d\t",a[i]);
}
getch();
}
