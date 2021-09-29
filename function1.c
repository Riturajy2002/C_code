#include<stdio.h>
void add(void);
void main()
{
add();
add();
add();
add();


}
void add(void)
{
int x,y,z;
printf("Enter two number:");
scanf("%d%d",&x,&y);
z=x+y;
printf("Addition of two number is=%d",z);
}
