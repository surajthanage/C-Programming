
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
//
// Function name  : DisplayPerfect
// Description    : use to perfrom Display Perfect number 
// Input		   : Integer
// Output		   : Integer
// Date			: 21/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

struct node
{
	int Data;
	struct node * Next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int no)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->Data=no;
	newn->Next=NULL;
	if(*head!=NULL)
	{
		newn->Next=*head;
	}
	*head=newn;
}

void Display(PNODE head)
{
	printf("Element of node is :\n");
	while(head!=NULL)
	{
		printf("|%d|->",head->Data);
		head=head->Next;
	}
	printf("NULL\n");
}

int Count(PNODE head)
{
	int iCnt=0;
	while(head!=NULL)
	{
		iCnt++;
		head=head->Next;
	}
	return iCnt;
}

void DisplayPerfect(PNODE head)
{
	int iSum=0,iCnt=0;

	while(head!=NULL)
	{
		iSum=0;
		for(iCnt=1;iCnt<head->Data;iCnt++)
		{
			if((head->Data%iCnt)==0)
			{
				iSum=iSum+iCnt;
			}
		}
		if(iSum==head->Data)
		{
			printf("%d\t",head->Data);
		}
		head=head->Next;
	}
}
////////////////////////////////////////////////////////////////
// Write a program which Display all element which are 
// perfect from singly linear linked list
////////////////////////////////////////////////////////////////

int main()
{
		int iChoice=1,iNo=0;
	PNODE First=NULL;
	
	while(iChoice!=0)
	{
		printf("Enter you want to you use operation\n");
		printf("1 : Enetr the First node in linked list\n");
		printf("2 : Display node \n");
		printf("3 : Display Perfect number in linked list\n");
		printf("4 : Terminated appllication\n");
		scanf("%d",&iChoice);
		
		switch(iChoice)
		{
			case 1:
				printf("Enetr first node  \n");
				scanf("%d",&iNo);
				InsertFirst(&First,iNo);
				break;
				
			case 2:
				printf("Display node in linked list");
				Dispaly(First);
				break;
				
			case 3:
				printf("Display Display Perfect number in linked list");
				DisplayPerfect(First);
				break;
				
			case 4:
				printf("Thank you for using application\n");
				iChoice=0;
				break;
				
			default:
				printf("Plese enter correct number\n");
				break;	
		}
	}
	return 0;
}