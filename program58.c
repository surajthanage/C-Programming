//Write a program which return smallest element from singly linear linked list

#include<stdio.h>
#include<stdlib.h>
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

///////////////////////////////////////////////////////////////
//
// Function name : Minimum
// Description   : use to perfrom singly linear linked list
// Input			 : Pointer,Integer
// Output			 : Integer
// Date			 : 19/05/2022
// Author			 : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////
struct node
{
	int Data;
	struct node * Next;
};

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

int Minimum(PNODE head)
{
	int iMin=head->Data;
	while(head!=NULL)
	{
		if(iMin>head->Data)
		{
			iMin=head->Data;
		}
		head=head->Next;
	}
	return iMin;
}

//////////////////////////////////////////////////////////////////
//Write a program smallest element from singly linear linked list
/////////////////////////////////////////////////////////////////
int main()
{
	int iChoice=1,iNo=0,iRet=0;
	PNODE First=NULL;
	
	while(iChoice!=0)
	{
		printf("Enter you want to you use operation\n");
		printf("1 : Enetr the First node in linked list\n");
		printf("2 : Display node \n");
		printf("3 : Dispaly Minimum number in linked list\n");
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
				iRet=Minimum(First);
				printf("Minimum number in linked list is  :%d\n",iRet);
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