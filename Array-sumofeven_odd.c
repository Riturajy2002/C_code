#include<stdio.h>
void main()
{
int a[10];
int i,so,se;
printf("Enter 10 numbers:");
for(i-0;i<9;i++)
 scanf("%d",&a[i]);
 for(i=0;i<9;i++)
 {
 if(a[i]%2==0)
 {
 se=se+a[i];
 }
 else
 {
 so=so+a[i];
 }
 }
 printf("Sum of even number is=%d\n",se);
 printf("Sum of odd number is=%d",so);

}
