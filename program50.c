#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
//
// Function name  : DisplayProduct
// Description    : use to perfrom N number Display product of digit
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

void DisplayProduct(PNODE Head)
{
	int iDigit=0,iMult=0,iNo=0;
	
	while(Head!=NULL)
	{
		iDigit=0;
		iMult=1;
		iNo=Head->Data;
		
		while(iNo!=0)
		{
			iDigit=iNo%10;
			if(iDigit!=0)
			{
				iMult=iMult*iDigit;
			}
			iNo=iNo/10;
		}
		printf("%d\t",iMult);
		Head=Head->Next;
	}
}

///////////////////////////////////////////////////////////////
//Accept N number from user and Display product of each Digit 
///////////////////////////////////////////////////////////////

int main()
{int iChoice=1,iNo=0;
	PNODE First=NULL;
	
	while(iChoice!=0)
	{
		printf("Enter you want to you use operation\n");
		printf("1 : Enetr the First node in linked list\n");
		printf("2 : Display node \n");
		printf("3 : Dispaly product of digit in N numbers\n");
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
				printf("Display product of digit in linked list");
				DisplayProduct(First);
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
// Input	:	121  15  89  11
// output	:    2   5    72  1
//
///////////////////////////////////////////////////////