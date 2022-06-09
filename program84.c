#include<stdio.h>
#include<stdbool.h>


//////////////////////////////////////////////////////////////////////
//
// Function name  : checkSpecial
// Description    : use to perfrom check Special character
// Input		   : Character
// Output		   : Character
// Date			: 25/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

bool checkSpecial(char ch)
{
	if((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z')||(ch>='0')&&(ch<='9'))
	{
		return false;
	}
	else 
	{
		return true;
	}
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and check Special character
/////////////////////////////////////////////////////////////////////////

int main()
{
	char cValue='\0';
	bool bRet;
	printf("enter the string\n");
	scanf("%c",&cValue);
	
	bRet=checkSpecial(cValue);
	if(bRet==true)
	{
		printf("It is special character\n");
	}
	else
	{
		printf("It is not special character\n");
	}
	
	
}