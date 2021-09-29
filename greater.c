#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the value of a ,b and c");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("a is greater than among three=%d",a);
if(b>a&&b>c)
printf("b is greater than among three=%d",b);
if(c>a&&c>b)
printf("c is greater than among three=%d",c);
getch();

}
