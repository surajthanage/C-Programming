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
void Display()
{
	static int i=0;
	int iNo=5;
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
	Display();
	
	return 0;	
}

///////////////////////////////////////////////////////
//
// Input	:	5
// output	:	5 4 3 2 1 
//
///////////////////////////////////////////////////////