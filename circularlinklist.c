#include<stdio.h>
#include<conio.h>
void main()
{
createcLL();
display();
/*insertatbeg();
insertatend();
insertatpos();
delfrombeg();
delfromend();*/
delfrompos();
display();

}
struct node
{
int data;

struct node *next;
};
struct node* head,*newnode,*tail;
int count=1;
void createcLL()
{
struct node *temp;
head=0;
int choice=1;
while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data:");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{
head=temp=newnode;
}
else
{
temp->next=newnode;
temp=newnode;
}
temp->next=head;
tail=temp;
printf("Do you want to continue press 1 or 0 for  exit:");
scanf("%d",&choice);
}
}

void display()
{
struct node*temp;
if(head==0)
{
printf("List is empty");

}
else
{
temp=head;
printf("The circular link list is=");
while(temp->next!=head)
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

    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data which you want to insert at begginng: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(tail==0)
    {

        tail=newnode;
        tail->next=newnode;


    }
    else{
        newnode->next=head;
        head=newnode;
        tail->next=head;



    }
}
void insertatend()
{

    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data which you want to insert at end: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(tail==0)
    {

        tail=newnode;
        tail->next=newnode;


    }
    else{

        tail->next=newnode;
        tail=newnode;
    }
}
void insertatpos()
{

    struct node *temp,*newnode;
    int pos;
    int i=1;
    printf("Enter the position where you want to insert :");
    scanf("%d",&pos);
   if((pos<0)||(pos>count))
    {

        printf("Invalid position:\n");
    }
    else if (pos==1)
    {

        insertatbeg();
    }
    else if(pos==count)
    {

        insertatend();
    }
    else
    {


        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data which you want to insert:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        temp=head;
        while(i<pos-1)
        {

            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;

    }
}

void delfrombeg()
{

    struct node*temp;
    if(head==0)
    {

        printf("List is empty");
    }
    else{
    temp=head;
    head=head->next;
    tail->next=head;
    free(temp);
}
}
void delfromend()
{

 struct node *prev,*temp;
 if(head==0)
 {
     printf("List is empty");
 }
 else{
 temp=head;
 while(temp->next!=tail->next)
 {

     prev=temp;
     temp=temp->next;
 }
 prev->next=tail->next;
 tail=prev;
 free(temp);
}
}
void delfrompos()
{

    struct node *temp,*nextnode;
    int pos=0;
    int i=1;
    temp=head;
    printf("Enter the position which node you want to delete:");
    scanf("%d",&pos);
    if((pos<1)||(pos>count))
    {

        printf("invalid position");

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
        nextnode=temp->next;
        temp->next=nextnode->next;
        free(nextnode);
    }

}

