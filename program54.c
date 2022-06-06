
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
//
// Function name  : SecMaximum
// Description    : use to perfrom Second Maximum number 
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
	printf("Element of node is :\n");
	while(Head!=NULL)
	{
		printf("|%d|-->",Head->Data);
		Head=Head->Next;
	}
	printf("NULL\n");
}
int Count(PNODE Head)
{
	int iCnt=0;
	while(Head!=NULL)
	{
		iCnt++;
		Head=Head->Next;
	}
	return iCnt++;
}

int SecMaximum(PNODE Head)
{
	int iCnt=0,iSize=0;
	int iMax=Head->Data;
	int iSecMax=Head->Data;
	
	while(Head!=NULL)
	{
		if(iMax<Head->Data)
		{
			iSecMax=iMax;
			iMax=Head->Data;
		}
		else if(iSecMax<Head->Data)
		{
			iSecMax=Head->Data;
		}
		Head=Head->Next;
	}
	return iSecMax;
}
///////////////////////////////////////////////////////////////////////////////////////////
// Write a Program Which return asecond maximum element from singly linear linked list
////////////////////////////////////////////////////////////////////////////////////////////
int main()
{	
	int iChoice=1,iNo=0,iRet=0;
	PNODE First=NULL;
	
	while(iChoice!=0)
	{
		printf("Enter you want to you use operation\n");
		printf("1 : Enetr the First node in linked list\n");
		printf("2 : Display node \n");
		printf("3 : Second Maximum number in linked list\n");
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
				printf("Second Maximum number in linked list");
				iRet=SecMaximum(First);
				printf("Second Maximum number in linked list is :%d\n",iRet);
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