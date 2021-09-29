#include<stdio.h>
#include<conio.h>
void main()
{
int fib1=0,fib2=1,fib3,limit;
int count=0;

printf("enter the limit to generate the fibonacci sequence\n");
scanf("%d",&limit);
printf("the fibonacci sequence is............\n");
printf("%d\n",fib1);
printf("%d\n",fib2);
count=2;
while(count<limit)
{
fib3=fib1+fib2;
count++;
printf("%d\n",fib3);
fib1=fib2;
fib2=fib3;
}
getch();
}
