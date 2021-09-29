#include<stdio.h>
#include<conio.h>
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
struct node
{
int data;
struct node * next;
};
struct node *front=0;
struct node *rear=0;
void enqueue()
{
int x;
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the element which you want to insert :");
scanf("%d",&x);
newnode->data=x;
newnode->next=0;
if((front==0)&&(rear==0))
{
front=rear=newnode;
rear->next=front;
}
else
{
rear->next=newnode;
rear=newnode;
rear->next=front;
}
}
void display()
{
struct node *temp;
temp=front;
if((front==0)&&(rear==0))
{
printf("The Circular queue is empty:");
}
else
{
printf("The elements in the circular queue is:");
while(temp->next!=front)
{
printf("%d\t",temp->data);
temp=temp->next;
}
printf("%d",temp->data);
}
}
void peek()
{
if((front==0)&&(rear==0))
{
printf("The circular queue is empty");
}
else
{
printf("The topmost element in the queue is=%d",front->data);
}
}
void dequeue()
{
struct node *temp;
temp=front;
if((front==0)&&(rear==0))
{
printf("The queue is empty");
}
else if(front==rear)
{
    printf("the dequeued element from the circular Queue is=%d",front->data);
front=rear=0;
free(temp);
}
else
{
printf("the dequeued element from the circular Queue is=%d",front->data);
front=front->next;
rear->next=front;
free(temp);
}

}

