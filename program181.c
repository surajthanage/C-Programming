#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
// Function name  : MiddleElement1 
// Description    : return middle element of linked list
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

int MiddleElement1(PNODE head)
{
	PNODE fast=head;
	PNODE slow=head;
	while((fast!=NULL)&&(fast->next!=NULL))
	{
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow->data;
}
int main()
{
	int iRet=0;
	PNODE First=NULL;
	InsertFirst(&First,6);
	InsertFirst(&First,28);
	InsertFirst(&First,25);
	InsertFirst(&First,496);
	InsertFirst(&First,69);
	InsertFirst(&First,66);
	InsertFirst(&First,55);

	Display(First);
	AddDig(First);
	
	iRet=MiddleElement1(First);
	printf("middel element is %d \n:",iRet);
	return 0;
}