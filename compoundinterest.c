#include<stdio.h>
#include<math.h>
int main()
{
float p,t,r,ci,k;
printf("enter the value of p,t,r");
scanf("%f%f%f",&p,&t,&r);
k=pow((1+r/100),t);
ci=p*k;
printf("the compound interest is=%f",ci);
return 0;

}
