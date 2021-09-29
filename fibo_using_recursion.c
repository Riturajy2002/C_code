#include<stdio.h>
int fibo(int n);
void  main()
{
int c,f,n;
printf("Enter no.of terms:");
scanf("%d",&n);
for(c=0;c<n;c++)
{
f=fibo(c);
printf("%d\t",f);
}
}
int fibo(int n)
{
if(n==0||n==1)
{
return(n);
}
else
{
return(fibo(n-1)+fibo(n-2));
}
}
