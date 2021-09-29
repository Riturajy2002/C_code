#include<stdio.h>
#include<conio.h>
#define N 5
int dequeue[N];
int front=-1;
int rear=-1;
void main()
{
int ch;
do{
printf("Enter choice 1:Enqueue From Front,Enter choice 2:Enqueue from Rear,Enter the choice 3:Display,Enter the choice 4:GetRear,Enter the choice 5:GetFront\n");
scanf("%d",&ch);
switch(ch)
{
case 1: enqueue_front();
break;
case 2:enqueue_rear();
break;
case 3:display();
break;
case 4: GetRear();
break;
case 5:GetFront();
break;
default:printf("Please Enter a valid position:\n");
}}while(ch!=0);
getch();
}
void enqueue_front()
{
int x;
printf("Enter the data which you want  to insert from front end:");
scanf("%d",&x);
if((front==0)&&(rear==N-1))
{
printf("the dequeue is Full");
}
else if((front==-1)&&(rear==-1))
{
front=rear=0;
dequeue[front]=x;
}
else if(front==0)
{
front=N-1;
dequeue[front]=x;
}
else
{
front--;
dequeue[front]=x;
}
}
void enqueue_rear()
{
int x;
printf("Enter the data which you want  to insert from rear end:");
scanf("%d",&x);
if((front==0)&&(rear==N-1))
{
printf("the dequeue is Full\n");
}
else if((front==-1)&&(rear==-1))
{
front=rear=0;
dequeue[rear]=x;
}
else if(rear=N-1)
{
rear=0;
dequeue[rear]=x;
}
else
{
rear++;
dequeue[rear]=x;
}
}
void display()
{
int i=front;

if((front==-1)&&(rear==-1))
{
printf("the dequeue is empty:");
}
else
{
printf("The element of the Dequeue is: ");
while(i!=rear)
{
printf("%d\n",dequeue[i]);
i=(i+1)%N;
}
printf("%d\n",dequeue[rear]);
}
}
void GetFront()
{
if((front==-1)&&(rear==-1))
{
printf("the queue is empty:");
}
else
{
printf("The element at the Front position=%d\n",dequeue[front]);
}
}
void GetRear()
{
if((front==-1)&&(rear==-1))
{
printf("the queue is empty:");
}
else
{
printf(" the element at the rear position=%d\n",dequeue[rear]);
}
}


