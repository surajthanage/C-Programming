#include<stdio.h>
#include<stdlib.h>
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

///////////////////////////////////////////////////////////////
//
// Function name : SearchFirstOcc
// Description   : use to perfrom Search First Occ linked list
// Input			 :Pointer,Integer
// Output			 : Integer
// Date			 : 19/05/2022
// Author			 : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

struct node
{
	int Data;
	struct node * next;
};

void InsertFirst(PPNODE head,int no)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->Data=no;
	newn->next=NULL;
	
	if(*head!=NULL)
	{
		newn->next=*head;
	}
	*head=newn;
}
void Display(PNODE head)
{
	printf("Element of linked lis is :\n");
	while(head!=NULL)
	{
		printf("|%d|->",(head->Data));
		head=head->next;
	}
	printf("NULL\n");
}
int Count(PNODE head)
{
	int iCnt=0;
	while(head!=NULL)
	{
		iCnt++;
		head=head->next;
	}
	return iCnt;
}

int SearchFirstOcc(PNODE head,int no)
{
	int size=0,i=0;
	size=Count(head);
	for(i=1;i<=size;i++)
		{
			if(head->Data==no)
			{
				return i;
			}
			head=head->next;
		}
}
///////////////////////////////////////////////////////
// Write a program which search first occurrence 
//////////////////////////////////////////////////////
int main()
{
	int iChoice=1,iNo=0;
	PNODE First=NULL;
	
	while(iChoice!=0)
	{
		printf("Enter you want to you use operation\n");
		printf("1 : Enetr the First node in linked list\n");
		printf("2 : Display node \n");
		printf("3 : Search First Occurance number in linked list\n");
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
				printf("Enetr a number to Search first Occurance in linked list");
				scanf("%d",&iNo);
				iRet=SearchFirstOcc(First,int iNo);
				printf("Search Last Occurance number in linked list is  :%d\n",iRet);
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