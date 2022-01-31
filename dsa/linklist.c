#include<stdio.h>
#include<conio.h>
#include<malloc.h> 
#include<process.h> 
struct node
{
int info; 
struct node *next;
};
typedef struct node NodeType;
NodeType *head; 
struct node *head = NULL;
void insert_atbeginning(int); 
void insert_givenpos(int); 
void insert_atend(int); 
void delet_atbeginning(); 
void delet_atend(); 
void delet_givenpos(); 
void info_sum(); 
void count_nodes(); 
void main()
{
int choice; int item;
do {
    printf("\n objective of program:\n");
    printf("1)insert at beginning \n2)insert at given position \n3)insert at end\n\t4)Delete at beginning\n\t5)delete at end\n\t6)delete at given pos\n\t7)count nodes\n\t8)Display items\n\t9:exit\n");
    printf("enter your choice\n"); 
    scanf("%d",&choice); 
    switch(choice)
    {
    case 1:
    printf("Enter item to be inserted at beginning:");
    scanf("%d", &item);
    insert_atbeginning(item);
    break;
    case 2:
    printf("Enter item to be insert at given pos:");
    scanf("%d", &item);
    insert_givenposition(item); 
    break;
    case 3:
    printf("Enter item to be insert at end:");
    scanf("%d", &item);
    insert_atend(item); 
    break;
    case 4:
    delet_atbeginning(); 
    break;
    case 5:
    delet_atend(); 
    break;
    case 6:
    delet_givenpos(); 
    break;
    case 7:
    count_nodes(); 
    break;
    case 8:
    info_sum(); 
    break; 
    case 9:
    break;
    default:
    printf("invalid choice\n");
    break;
    }
}while(choice!=9);
 getch();
}

void insert_atbeginning(int item)
{
    NodeType *nnode;
    nnode=(NodeType*)malloc(sizeof(NodeType)); 
    nnode->info=item; 
    nnode->next=head; 
    head=nnode;
}
void insert_givenposition(int item)
{
    NodeType *nnode; 
    NodeType *temp; 
    temp=head;
    int p,i;
    nnode=(NodeType*)malloc(sizeof(NodeType)); 
    nnode->info=item; 
    if (head==NULL)
    { 
    nnode->next=NULL;
    head=nnode;
    }
    else
    {
    printf("Enter Position of a node at which you want to insert an new node\n");
    scanf("%d",&p);
    for(i=1;i<p-1;i++)
    {
        temp=temp->next;
    }
    nnode->next=temp->next; 
    temp->next=nnode;
    }
}
void insert_atend(int item)
 {
    NodeType *nnode; 
    NodeType *temp; 
    temp=head;
    nnode=( NodeType *)malloc(sizeof(NodeType)); 
    nnode->info=item;
    if(head==NULL) 
    { 
    nnode->next=NULL; 
    head=nnode; 
    }
    else {
    while(temp->next!=NULL)
    {
    temp=temp->next;
    }
    nnode->next=NULL; 
    temp->next=nnode;
    }
}
void delet_atbeginning()
{
    NodeType *temp; 
    if(head==NULL)
    {
    printf("Void deletion\n"); 
    return;
    }
    else { 
    temp=head; 
    head=head->next; 
    free(temp);
    }
}
void delet_atend()
{
    NodeType *hold,*temp; 
    if(head==NULL)
    {
    printf("Void deletion\n"); 
    return;
    } 
    else if(head->next==NULL) 
    {
    hold=head; head=NULL;
    free(hold);
    }
    else 
    { 
    temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    hold=temp->next; 
    temp->next=NULL;
    free(hold);
    }
}
void delet_givenpos()
{
    NodeType *hold,*temp;
    int pos, i;
    if(head==NULL)
    {
        printf("Void deletion\n");
        return;
    }
    else 
    { 
    temp=head;
    printf("Enter position of node which node is to be deleted\n");
    scanf("%d",&pos); 
    for(i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    hold=temp->next; 
    temp->next=hold->next;
    free(hold);
    }
}
void info_sum()
{
    NodeType *temp; 
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->info); 
        temp=temp->next;
    }
}
void count_nodes()
{ 
    int cnt=0;
    NodeType *temp;
    temp=head; 
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
 printf("total nodes=%d",cnt);
}