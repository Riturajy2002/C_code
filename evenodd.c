#include<stdio.h>
#include<conio.h>
void main()
{
int num,n;
printf("enter the value of num");
scanf("%d",&num);
if(num%2==0)
{
printf("the numer is even");
}
else
{
printf("the number is odd");
}
n=(sizeof(int));
printf("the size is=%d\n",n);
getch();
}
