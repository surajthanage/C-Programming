#include<stdio.h>
#include<stdbool.h>


///////////////////////////////////////////////////////////////////////////
//
// Function name  : Factorial
// Description    : use to perfrom of 1 number return factoral that number
// Input	      : Integer
// Output	      : Pattern
// Date	          : 11/06/2022
// Author	      : Suraj Sanjay Thanage
//
////////////////////////////////////////////////////////////////////////////
int Factorial(int iNo)
{
	static int fact=1;
	
	if(0<iNo)
	{
		fact=fact*iNo;
		Factorial(--iNo);
	}
	return fact;
}

///////////////////////////////////////////////////////////////////////////
// Write a recursive program which accept number from user and
// return its factorial.
///////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue=0,iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=Factorial(iValue);
	printf("Factorial of that number is :%d\n",iRet);
	
	
	return 0;	
}

///////////////////////////////////////////////////////
//
// Input	:	5
// output	:	120
//
///////////////////////////////////////////////////////