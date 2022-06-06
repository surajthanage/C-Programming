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
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i==j)||(i==1)||(i==iRow)||(j==1)||(j==iCol))
			{
				printf("%d\t",j);
			}
			else
			{
				printf(" \t");
			}
		}
		printf("\n");
	}
}

////////////////////////////////////////////////////////////////////////
//accept number of row and columns from user and display below pattern
////////////////////////////////////////////////////////////////////////

int main()
{
	auto int iValue1=0,iValue2=0;
	
	printf("enter number of column:\t");
	scanf("%d",&iValue1);
	
	printf("enter number of column :\t");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}

/////////////////////////////////
//Output :
//		1	2	3	4	5
//		1	2			5
//		1		3		5
//		1			4	5
//		1	2	3	4	5
//////////////////////////////////
