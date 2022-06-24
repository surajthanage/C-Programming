#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Description   : use to perfrom of 1 number Display pattern
// Input	      : Integer
// Output	      : Pattern
// Date	          : 10/06/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
	static int i=0;
	
	if(i<iNo)
	{
		printf("%d ",iNo);
		iNo--;
		Display(iNo);
	}
}

///////////////////////////////////////////////////////////////////////////
// Write a recursive program which display below pattern
///////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	printf("Enter number\n");
	scanf("%d",&iValue);

	Display(iValue);
	
	return 0;	
}

///////////////////////////////////////////////////////
//
// Input	:	5
// output	:	5 4 3 2 1 
//
///////////////////////////////////////////////////////