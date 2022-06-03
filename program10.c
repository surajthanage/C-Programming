#include<stdio.h>
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////
//
// Function name : ChkEven
// Description   : use to perfrom of 1 numbers
// Input			 : Integer,Integer
// Output			 : Integer
// Date			 : 2/04/2022
// Author			 : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////

typedef int BOOL;

int ChkEven(int iNo)
{
	if((iNo%2)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

///////////////////////////////////////////////////////////
// Write a program to check whether number is even or odd
//////////////////////////////////////////////////////////

int main()
{
	int iValue =0;
	BOOL bRet=FALSE;

	printf("Enter number\n");
	scanf("%d",&iValue);

	bRet=ChkEven(iValue);

	if(bRet==TRUE)
	{
		printf(" This number is Even number\n");
	}
	else
	{
		printf(" This number is odd number\n");
	}

	return 0;
}

///////////////////////////////////////////////////////
//
// Input	:		11				
// output	:	This number is odd number
//
///////////////////////////////////////////////////////