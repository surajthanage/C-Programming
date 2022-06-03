#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function name  : DisplayReverse
// Description    : use to perfrom 1 number
// Input		   : Integer
// Output		   : Integer
// Date			   : 4/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

void DisplayReverse(int iNo)
{
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}

	while(iNo!=0)
	{
		iDigit=iNo%10;
		printf(" %d\n",iDigit);
		iNo=iNo/10;
	}
}

///////////////////////////////////////////////////////
// Write a program its dispaly reverse
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	DisplayReverse(iValue);
	
	return 0;
}