#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
//
// Function name  : DisplaySmall
// Description    : use to perfrom N number
// Input		   : Integer
// Output		   : Integer
// Date			: 20/05/2022
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
void DisplaySmall(PNODE Head)
{
	int iDigit=0,iNo=0;
	int iSmall=0;
	
	while(Head!=NULL)
	{
		iDigit=0;
		iNo=Head->Data;
		iSmall=iNo;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			if(iSmall>iDigit)
			{
				iSmall=iDigit;
			}
			iNo=iNo/10;
		}
		printf("%d\t",iSmall);
		Head=Head->Next;
	}
}

////////////////////////////////////////////////////////
// Accept N number from user and display smmalest digit
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
		printf("3 : Dispaly small number in linked list\n");
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
				printf("Display Small number in linked list");
				DisplaySmall(First);
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
// Input	:	84563  520  564  152  562
// output	:	 3      0     4   1    2
//
///////////////////////////////////////////////////////