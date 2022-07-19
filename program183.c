#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////
//
// Function name  : CheckLoop
// Description    : linked list check loop
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
bool CheckLoop(PNODE head)
{
	PNODE fast=head;
	PNODE slow=head;
	bool flag=false;
	
	while((fast!=NULL)&&(fast->next!=NULL))
	{
		slow=slow->next;
		fast=fast->next->next;
	
		if(fast==slow)
		{
			flag=true;
			break;
		}
	}
	return flag;
}
int main()
{
	bool bRet=0;
	PNODE First=NULL;
	
	PNODE Third=NULL;
	PNODE Last=NULL;
	
	InsertFirst(&First,60);
	InsertFirst(&First,50);
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);
	
	Third=First;
	Last=First;
	
	Third=Third->next->next;
	Last=Last->next->next->next->next;
	
	Last->next=Third;
	
	bRet=CheckLoop(First);
	if(bRet==true)
	{
		printf("There is a loop in linked list\n");
	}
	else
	{
		printf("There is a loop in linked list\n");
	}
	
	return 0;
}