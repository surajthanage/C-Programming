#include<stdio.h>

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

void Display(int iRow,int iCol)
{
	register int i=0,j=0;
	
	for(i=iRow;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}	
}

///////////////////////////////////////////////////////////////////////
//accept number of row and columns from user and display below pattern
///////////////////////////////////////////////////////////////////////

int main()
{
	auto  int iValue1=0,iValue2=0;

	printf("Enter number of row is :\t");
	scanf("%d",&iValue1);
	
	printf("Enter number of column: \t");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}
//////////////////////////////////////////
//output:
//
//			*		*			*
//			*		*
//			*
//
///////////////////////////////////////
