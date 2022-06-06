#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
//
// Function name  : Reverse
// Description    : use to perfrom Reverse number 
// Input		   : Integer
// Output		   : Integer
// Date			   : 21/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

struct node
{
	int Data;
	struct node *Next;
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

void Reverse(PNODE Head)
{
	int iDigit=0,iNo=0,iRev=0;
	
	while(Head!=NULL)
	{
		iDigit=0;
		iRev=0;
		iNo=Head->Data;
		
		while(iNo!=0)
		{
			iDigit=iNo%10;
			iRev=iRev*10+iDigit;
			iNo=iNo/10;
		}
		printf("|%d|-->",iRev);
		Head=Head->Next;
	}
}

/////////////////////////////////////////////////////////
// Accept N number from user and display Reverse
////////////////////////////////////////////////////////

int main()
{
	int iChoice=1,iNo=0;
	PNODE First=NULL;
	
	while(iChoice!=0)
	{
		printf("Enter you want to you use operation\n");
		printf("1 : Enetr the First node in linked list\n");
		printf("2 : Display node \n");
		printf("3 : Dispaly Reverse number in linked list\n");
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
				printf("Display Reverse number in linked list");
				Reverse(First);
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

///////////////////////////////////////////////////////
//
// Input	:	60  25  50  12
// output	:	06	52  05   21		
//
///////////////////////////////////////////////////////