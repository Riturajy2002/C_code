#include<stdio.h>
#include<conio.h>
void main()
{
    create();
    display();
    insertbeg();
    insertatend();
    insertatpos();
    insertafterposition();
    display();
    delfrombeg();
    delfromend();
    delfrompos();
    display();

    getch();
}
struct node
{
int data;
struct node* next;
struct node* prev;
};
struct node* head,*newnode,*tail;
int count=0;
void create()
{
head=0;
struct node* temp;
int choice=1;

while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data :");
scanf("%d",&newnode->data);
newnode->next=0;
newnode->prev=0;
if(head==0)
{
head=temp=newnode;
}
else
{
 temp->next=newnode;
 newnode->prev=temp;

 temp=newnode;
 tail=temp;
 }
printf("Do you want  to continue press 1 or 0 for exit:");
scanf("%d",&choice);
}
}
void display()
{

    struct node* temp;
    temp=head;
    printf("the  linked list is:");
    while(temp!=0)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
        count++;

    }

}
void insertbeg()
{

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data which you want to insert at the beginning:");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    head->prev=newnode;
    newnode->next=head;
    head=newnode;

}
void insertatend()
{

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data which you want to insert at the end:");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void insertatpos()
{

    int pos;
    int i=1;
    printf("Enter the position where you want to insert:");
    scanf("%d",&pos);
    if(pos>count)
    {

        printf("Invalid position\n");
    }
    else if(pos==1)
    {

        insertbeg();
    }
    else{
        struct node* temp;
        temp=head;
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
        temp->next=newnode;
        newnode->next->prev=newnode;


    }
}
void insertafterposition()
{

    int pos;
    int i=1;
    printf("enter position after which you want to insert:");
    scanf("%d",&pos);
    if(pos>count)
    {

        printf("invalid position\n");
    }
    else{
        struct node* newnode,*temp;
        temp=head;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data which you want to insert:");
        scanf("%d",&newnode->data);
        while(i<pos)
        {

            temp=temp->next;
            i++;
        }
        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->next->prev=newnode;
    }
}
void delfrombeg()
{

    struct node* temp;
    if(head==0)
    {

        printf("list is Empty");
    }
    else{
        temp=head;
        head=head->next;
        head->prev=0;
        free(temp);
    }
}
void delfromend()
{

    struct node *temp;
    if(tail==0)
        {
        printf("list is Empty");
    }
    else{
        temp=tail;
        tail->prev->next=0;
        tail=tail->prev;
        free(temp);
    }
}
void delfrompos()
{

    int pos;
    int i=1;
    struct node* temp;
    temp=head;
    printf("enter the position where you want delete:");
    scanf("%d",&pos);
    if(pos==1){
        delfrombeg();
    }
    else if(pos==count)
    {
        delfromend();
    }
    else{
        while(i<pos)
        {

            temp=temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
    }
}

