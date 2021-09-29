#include<stdio.h>
void swap(int *x,int *y);
void main()
{
int a,b;
printf("enter two number:");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("The value of a is before swap is=%d\n",a);
printf("the value of b is before swap is=%d\n",b);

}
void swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
printf("the value of a is after swap is=%d\n",*x);
printf("The value of b is after swap is=%d\n",*y);
}
