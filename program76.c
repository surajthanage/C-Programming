#include<stdio.h>
#include<stdbool.h>


//////////////////////////////////////////////////////////////////////
//
// Function name  : Check
// Description    : use to perfrom check alphabet
// Input		   : Character
// Output		   : Character
// Date			: 25/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

bool Check(char ch)
{
	if((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z'))
	{
		return true;
	}
	else
	{
		return false;
	}
}
///////////////////////////////////////////////////////////////////////
// Accept character from user and check whether it is alphabet or not
///////////////////////////////////////////////////////////////////////

int main()
{
	char cValue='\0';
	bool bRet;
	printf("enter the string\n");
	scanf("%s",&cValue);
	
	bRet=Check(cValue);
	if(bRet==true)
	{
		printf("It is a character\n");
	}
	else
	{
		printf("It is not a character\n");
	}
}