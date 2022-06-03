//Write aprogram which accept number from user and Dispaly its factors in decresing order.
#include<stdio.h>
///////////////////////////////////////////////////////////////
//
// Function name : DispalyFactRev
// Description   : use to perfrom of 1 numbers
// Input			 : Integer
// Output			 : Integer
// Date			 : 4/04/2022
// Author			 : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

void DispalyFactRev(int iNo)
{
	int iCnt=0;
	for(iCnt=iNo-1;iCnt>=1;iCnt--)
	{
		if(iNo%iCnt==0)
		{
			printf(" %d",iCnt);
		}
	}
}

//////////////////////////////////////////////////////////////
// Write a program to Dispaly its factors in decresing order
/////////////////////////////////////////////////////////////

int main()
{
	int iValue;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	DispalyFactRev(iValue);
	
	return 0;
}

///////////////////////////////////////////////////////
//
// Input	:		15				
// output	:		5  3  1
//
///////////////////////////////////////////////////////