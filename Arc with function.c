#include<stdio.h>
int arc(int n);
void main()
{
int r;
int A;
printf("Enter the raduis:");
scanf("%d",&r);
A=arc(r);
printf("The area of circle is=%d",A);
getch();
}
int arc(int n)
{
int c;
c=3.14*n*n;
return(c);
}
