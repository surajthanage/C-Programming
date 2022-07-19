#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
// Function name  : Reverse 
// Description    : reverse linked list
// Input	      : Integer
// Output	      : Integer
// Date	          : 14/07/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////////

struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head,int no)
{
	PNODE  newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	
	if(*head!=NULL)
	{
		newn->next=*head;
	}
	*head=newn;	
}
void Display(PNODE head)
{
	printf("Element of linked list are :");
	
	while(head!=NULL)
	{
		printf("|%d|->",head->data);
		head=head->next;
	}
	printf("\n");
}

void Reverse(PPNODE head)
{
	PNODE Previous=NULL;
	PNODE Current=*head;
	PNODE Next=NULL;
	
	while(Current!=NULL)
	{
		Next=Current->next;
		Current->next=Previous;
		Previous=Current;
		Current=Next;
	}
	
	*head=Previous;
}
int main()
{
	int iRet=0;
	PNODE First=NULL;
	InsertFirst(&First,60);
	InsertFirst(&First,50);
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);
	

	Display(First);
	Reverse(&First);
	Display(First);
	return 0;
}