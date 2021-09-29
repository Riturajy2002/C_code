#include<stdio.h>
void main()
{
int a[2][2],b[2][2],c[2][2],i,j,k;
int sum;
printf("Enter  4 value for first matrix");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter 4 value for second matrix :");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
sum=0;
for(k=0;k<2;k++)
{
sum=sum+a[i][k]*b[k][j];
c[i][j]=sum;
}
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",c[i][j]);

}
printf("\n");
}

}
