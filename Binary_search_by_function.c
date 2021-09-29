#include<stdio.h>
#include<conio.h>
void bin_search(int L[],int n,int item);

void main()
{
int a[]={2,56,43,23,12,4,5,5,4,3,45,6,543,333};
int item=4;
bin_search(a,14,item);
}
void bin_search(int L[],int n,int item)
{
int l=0;
int r=n-1;
int m;
while(l<=r)
{
m=(l+r)/2;
if(item==L[m])
{
printf("search is successful at index %d",m);
return;
}
else if(item>L[m])
{
l=m+1;
}
else
{
r=m-1;
}
}
printf("search unsuccessful");
}

