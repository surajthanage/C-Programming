#include<stdio.h>
#include<stdbool.h>


//////////////////////////////////////////////////////////////////////
//
// Function name  : CheckSmallCase
// Description    : use to perfrom chech small case
// Input		   : Character
// Output		   : Character
// Date			: 25/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

bool CheckSmallCase(char ch)
{
	if((ch>='a')&&(ch<='z'))
	{
		return true;
	}
	else
	{
		return false;
	}
}
///////////////////////////////////////////////////////////////////////
// Accept character from user and check whether it is capital or not
///////////////////////////////////////////////////////////////////////

int main()
{
	char cValue='\0';
	bool bRet;
	printf("enter the string\n");
	scanf("%s",&cValue);
	
	bRet=CheckSmallCase(cValue);
	if(bRet==true)
	{
		printf("It is a Check Small Case\n");
	}
	else
	{
		printf("It is not a Check Small Case\n");
	}
}