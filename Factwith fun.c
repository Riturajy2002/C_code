#include<stdio.h>
int fact(int n);
void main()
{
int N,x;
printf("Enter the number which you want to calculate factorial:");
scanf("%d",&N);
x=fact(N);
printf("The factorial of the given number is=%d",x);
}
int fact(int n)
{
int i=1,f=1;
for(i=1;i<=n;i++)
{
f=f*i;
}
return(f);

}
