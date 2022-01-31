#include <stdio.h>
#include <stdlib.h>


/* Structure of a node */
struct node {
    int data;          // Data 
    struct node *next; // Address 
}*head;


void createList(int n);
void insertNodeAtBeginning(int);
void insertNodeAtEnd(int);
void ins_at_pos_n(int data,int position);
void deleteLastNode();
void deleteFirstnode();
void displayList();


int main()
{
    int n,data,choice,position;
    
    /*
     * Create a singly linked list of n nodes
     */
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);

  
    displayList();

     do
	{
		printf("5.deletion at beginning\n");
		printf("6.Delettion at the end\n");
        printf("1.insert at begining\n");
        printf("2.insert at the end\n");
        printf("3.insert at the given\n");
        printf("4.Display\n");
        printf("7.deletion at given\n");
		printf("8.Quit\n");

		printf("Enter your choice : ");
		scanf("%d",&choice); 
      switch(choice)
		{
			case 5 :
				printf("deletion at begining: ");
				scanf("%d", &data);

				deleteFirstNode();
				break;
			case 6 :
				printf("deletion at end:");
                scanf("%d",&data);
                delLastnode();
				break;
            case 3:
               ins_at_pos_n(data,position);    
               break;
			case 4:
				displayList();
				break;
			case 8:
				break;
				default:
				printf("Wrong choice\n");
            case 1:
                insertNodeAtBeginning(data); 
                break;   
            case 2:
               insertNodeAtEnd(data);
               break;
            case 7 :
               
               break;

            
	}while(choice!=8);
      
    return 0;
}


/*
 * Create a new node and inserts at the beginning of the linked list.
 */
void insertNodeAtBeginning(int data)
{
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; // Link data part
        newNode->next = head; // Link address part

        head = newNode;          // Make newNode as first node

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}

void insertNodeAtEnd(int data)
{
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; // Link the data part
        newNode->next = NULL; 

        temp = head;

        // Traverse to the last node
        while(temp != NULL && temp->next != NULL)
            temp = temp->next;

        temp->next = newNode; // Link address part

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}
void ins_at_pos_n(int data,int position)
    {
    	struct node *ptr = (struct node*)malloc(sizeof(struct node));
    	ptr->data=data;		//Creating a new node
    	int i;
    	struct node *temp=head;
    	if(position==1)
        {
        	ptr->next=temp;
    		head=ptr;
    		return;
    	}

    	for(i=1;i<position-1;i++)  //moving to the (n-1)th position node in the linked list
    	{
        	temp=temp->next;
    	}

    	ptr->next=temp->next;  //Make the newly created node point to next node of ptr temp
    	temp->next=ptr;  	//Make ptr temp point to newly created node in the linked list
}

void deleteFirstNode()
{
    struct node *toDelete;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        head = head->next;

        printf("\nData deleted = %d\n", toDelete->data);

        /* Clears the memory occupied by first node*/
        free(toDelete);

        printf("SUCCESSFULLY DELETED FIRST NODE FROM LIST\n");
    }
}

/*
 * Delete last node of the linked list
 */
void deleteLastNode()
{
    struct node *toDelete, *secondLastNode;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        secondLastNode = head;

        /* Traverse to the last node of the list */
        while(toDelete->next != NULL)
        {
            secondLastNode = toDelete;
            toDelete = toDelete->next;
        }

        if(toDelete == head)
        {
            head = NULL;
        }
        else
        {
            /* Disconnect link of second last node with last node */
            secondLastNode->next = NULL;
        }

        /* Delete the last node */
        free(toDelete);

        printf("SUCCESSFULLY DELETED LAST NODE OF LIST\n");
    }
}



/*
 * Display entire list
 */
void displayList()
{
    struct node *temp;

    /*
     * If the list is empty i.e. head = NULL
     */
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); // Print data of current node
            temp = temp->next;                 // Move to next node
        }
    }
}