#include<stdio.h>
#include<conio.h>
void main()
{
int a[5]={9,95,76,9,89};
int i,j;
int temp=0;
int flag=0;
for(i=0;i<=4;i++)
{
for(j=0;j<3-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
flag=1;

}
}
if(flag==0)
    break;

printf("%d\t",a[i]);
}

getch();
}
