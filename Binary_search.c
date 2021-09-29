#include<stdio.h>
#include<conio.h>
void main()
{
int A[]={2,56,78,45,34,56,78,654,67,54,34};
int mid=0;
int low=0;
int high=11;
int key=56;
while(low<=high)
{
mid=(high+low)/2;
if(key<A[mid])
{
high=mid-1;
}
else if(key>A[mid])
{
low=mid+1;
}
else if(key==A[mid])
{
printf("Element found at index=%d",mid);
break;
}
}
getch();
}
