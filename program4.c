#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function name : Check
// Description   : use to perfrom Check
// Input			 : Pointer,Integer
// Output			 : Integer
// Date			 : 1/04/2022
// Author			 : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
	if((iNo%5)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

/////////////////////////////////////////////////////////////
// Write a program to check whether is divisibleby 5 or not
/////////////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	BOOL bRet=FALSE;

	printf("Enter number\n");
	scanf("%d",&iValue);

	bRet= Check(iValue);
	if(bRet==TRUE)
	{
		printf("Divisible by 5\n");
	}
	else
	{
		printf("Not Divisible by 5\n");
	}


	return 0;
}

///////////////////////////////////////////////////////
//
// Input	:		10
// output	:		Divisible
//
///////////////////////////////////////////////////////