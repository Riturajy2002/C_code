#include<stdio.h>
#include<conio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void main()
{
int ch;
do
    {
    printf("\nEnter choice 1:Enqueue,Enter choice 2:Dequeue,Enter choice 3:Display,Enter choice 4:Peek\n");
    scanf("%d",&ch);
    switch(ch)
    {

    case 1:enqueue();
    break;
    case 2:dequeue();
    break;
    case 3:display();
    break;
    case 4:peek();
    break;
    default:printf("enter a valid choice:\n");
    }}while(ch!=0);
      getch();
      }
void enqueue()
{
int x;
printf("Enter the element which you want to Enqueue in queue ");
scanf("%d",&x);
if((front==-1)&&(rear==-1))
{
front=rear=0;
queue[rear]=x;
}
else if((rear+1)%N==front)
{
printf("Queue is full:");
}
else
{
rear=(rear+1)%N;
queue[rear]=x;
}
}
void display()
{
int i=front;
if((front==-1)&&(rear==-1))
{
printf("Queue is empty:");
}
else{
printf(" The element of the Queue is:");
while(i!=rear)
{
printf("%d\t",queue[i]);
i=((i+1)%N);
}
printf("%d",queue[rear]);
}
}
void dequeue()
{
if((front==-1)&&(rear==-1))
{
printf("Queue is empty");
}
else if(front==rear)
{
printf("The dequeued element is =%d",queue[front]);
front=rear=-1;
}
else
{
printf("The dequeued element is=%d",queue[front]);
front=(front+1)%N;
}

}
void peek()
{
if((front==-1)&&(rear==-1))
{
printf("Queue is empty");
}
else{
printf("the topmost element in the array is=%d",queue[front]);
}
}
