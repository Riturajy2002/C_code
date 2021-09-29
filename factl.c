#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,fact=1;
printf("enter the number");
scanf("%d",&num);
for(i=num;i>1;i--)
{
fact=fact*i;
}
printf("the factorial is =%d",fact);
getch();
}
