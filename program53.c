
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
//
// Function name  : AdditionEvan
// Description    : use to perfrom Addition Evan number 
// Input		   : Integer
// Output		   : Integer
// Date			   : 21/05/2022
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
void InsertFirst(PPNODE Head,int iNo)
{
	PNODE Newn=NULL;
	Newn=(PNODE)malloc(sizeof(NODE));
	
	Newn->Data=iNo;
	Newn->Next=NULL;
	
	if(*Head!=NULL)
	{
		Newn->Next=*Head;
	}
	*Head=Newn;
}
void Display(PNODE Head)
{
	printf("Element of sigly linked list is :\n");
	while(Head!=NULL)
	{
		printf("|%d|->",Head->Data);
		Head=Head->Next;
	}
	printf("NULL\n");
}

int AdditionEvan(PNODE Head)
{
	int iCnt=0,iSumEven=0;
	
	while(Head!=NULL)
	{
			if(Head->Data%2==0)
			{
				iSumEven=iSumEven+Head->Data;
			}
		Head=Head->Next;
	}
	return iSumEven;
}
//////////////////////////////////////////////////////////////////////////
// Write a Program Which return Addition of all even element
// from singly linear linked list
/////////////////////////////////////////////////////////////////////////
int main()
{
		int iChoice=1,iNo=0,iRet;
	PNODE First=NULL;
	
	while(iChoice!=0)
	{
		printf("Enter you want to you use operation\n");
		printf("1 : Enetr the First node in linked list\n");
		printf("2 : Display node \n");
		printf("3 : Addition Evan number in linked list\n");
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
				printf(" Addition Evan number in linked list");
				iRet=AdditionEvan(First);
				printf("Addition Evan  number in linked list is :%d\n",iRet);
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