#include<stdio.h>
void main(){
int a[3][3],b[3][3],i,j;
printf("Enter the 9 values for matrix:");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Matrix before transpose:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
b[j][i]=a[i][j];
}
}
printf("the matrix after transpose:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",b[i][j]);

}
printf("\n");
}
}
