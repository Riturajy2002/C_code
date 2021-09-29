#include<stdio.h>
void main()
{
int n ,a,b,c;
int count;
 printf("Enter the  number for fibonnacci Series:");
 scanf("%d" ,&n);
 a=0,b=1;
 printf("%d\n",a);
 printf("%d\n",b);
 count=2;
 while(count<n)
 {
 c=a+b;
 count=count+1;
 printf("%d\n",c);
 a=b;
 b=c;
 }

 }
