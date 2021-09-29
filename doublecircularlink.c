#include<stdio.h>
#include<conio.h>
void main()
{
creteDCLL();
display();
/*insertatbeg();
insertatend();
insertatpos();*/
delfrombeg();
delfromend();
delfrompos();
display();
}
struct node
{
int data;
struct node *next;
struct node *prev;
};
struct node *tail,*head;
int choice=1;
int count=1;
void creteDCLL()
{
struct node *newnode;
head=0;
while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data:");
scanf("%d",&newnode->data);
if(head==0)
{
head=tail=newnode;
head->next=head;
head->prev=head;
}
else
{
tail->next=newnode;
newnode->prev=tail;
newnode->next=head;
head->prev=newnode;
tail=newnode;
}
printf("Do you want to continue press 1 or 0 for exit:");
scanf("%d",&choice);
}
}
void display()
{
struct node *temp;
temp=head;
if(head==0)
{
printf("list is empty");
}
else
{
    printf("The doubly circular linked list=");
while(temp!=tail)
{
printf("%d\t",temp->data);
temp=temp->next;
count++;
}
printf("%d\n",temp->data);

}
}
void insertatbeg()
{

    struct node *newnode;
    newnode=(struct node*)malloc(sizeof (struct node));
    printf("Enter the data which you want to insert at begging:");
    scanf("%d",&newnode->data);
    if(head==0)
    {

        head=tail=newnode;
        head->next=newnode;

    }
    else{
        newnode->next=head;
        head->prev=newnode;
        newnode->prev=tail;
        tail->next=newnode;
        head=newnode;
    }
}
void insertatend()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof (struct node));
    printf("Enter the data which you want to insert at the end:");
    scanf("%d",&newnode->data);
    if(head==0)
    {

        head=tail=newnode;
        head->next=newnode;

    }
    else{
        newnode->prev=tail;
        tail->next=newnode;
        newnode->next=head;
        head->prev=newnode;
        tail=newnode;

    }

}
void insertatpos()
{

    struct node *temp,*newnode;
    int pos=0;
    int i=1;
    temp=head;
    printf("Enter the position where you want to insert:");
    scanf("%d",&pos);
    if((pos<1)||(pos>count))
    {

        printf("Invalid position");

    }
    else if(pos==1)
    {

        insertatbeg();

    }
    else{
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data which you want to insert:");
        scanf("%d",&newnode->data);
        while(i<pos-1)
        {

            temp=temp->next;
            i++;
        }
        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next->prev=newnode;
        temp->next=newnode;

    }

}
void delfrombeg()
{

    struct node* temp;
    temp=head;
    if (head==0)
    {

        printf("list is empty");

    }
    else if(head->next==head)
    {

        head=tail=0;
        free(temp);
    }
    else{
        head=head->next;
        head->prev=tail;
        tail->next=head;
        free(temp);
    }
}
void delfromend()
{

    struct node *temp;
    temp=tail;


        tail=tail->prev;
        tail->next=head;
        head->prev=tail;
        free(temp);


    }

void delfrompos()
{

  struct node*temp;
  int pos=0;
  int i=1;
  temp=head;
  printf("Enter the position which element you want to delete:");
  scanf("%d",&pos) ;
  if((pos<1) ||(pos>count))
  {

      printf("Invalid position");

  }
  else if(pos==1)
  {

      delfrombeg();
  }
  else{
    while(i<pos-1)
    {

        temp=temp->next;
        i++;

    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    if(temp==head)
    {

        tail=temp->prev;
        free(temp);
    }
    else{
        free(temp);
    }

  }
}




