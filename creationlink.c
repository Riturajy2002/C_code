#include<stdio.h>
#include<conio.h>



void main()
{


create();

getch();
}
struct node
{
    int info;
    struct node*link;

};
struct node* first;
char ch;
void create()
{

    struct node *ptr,*cpt;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&ptr->info);
    first=ptr;



do
{

    cpt=(struct node*)malloc(sizeof(struct node));
     printf("enter the data");
     scanf("%d",&cpt->info);
     ptr->link=cpt;
     ptr=cpt;
     print("press y/n for more information");
     ch=getch();
}
while(ch=='y');



    ptr->link=0;
}

