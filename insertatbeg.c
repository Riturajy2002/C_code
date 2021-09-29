#include<stdio.h>
#include<conio.h>
#define max 20
void main()
{
int a[max],i,j,n;
printf("enter the limit of the array :");
scanf("%d",&j);
if(j>=max)
{
printf("size of limit is not match it mean's overflow of the array");
exit(0);
}
printf("enter the elements of the array :");
for(i=0;i<j;i++)
{
    scanf("%d",&a[i]);
}
for(i=j;i>0;i--)
{

    a[i]=a[i-1];
}
printf("enter new element :");
scanf("%d",&a[0]);
j++;
printf("the elements of the array after insertion at the beginning:");
for(i=0;i<j;i++)
{

    printf("%d\t",a[i]);

}
getch();
}
