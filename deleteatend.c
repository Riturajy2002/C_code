#include<stdio.h>
#include<conio.h>
#define max 20
void main()
{
int a[max],i,j;
printf("enter the limit:");
scanf("%d",&j);
if(j>max)
{
printf("overflow condition of the array");
getch();
exit(0);
}
printf("enter the element of the array:");
for(i=0;i<j;i++)
{
scanf("%d",&a[i]);
}
j--;
printf("the elements of the array after deletion at the end :");
for(i=0;i<j;i++)
{
printf("%d\t",a[i]);
}

getch();
}
