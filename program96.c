#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////////////////
//
// Function name  : CheckChar
// Description    : use to perfrom string and  Check character present or not String
// Input		   : String
// Output		   : String
// Date		   : 27/05/2022
// Author		   : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////////////////////////////////////

bool CheckChar(char *str,char ch )
{
	while(*str!='\0')
	{
		if(*str==ch)
		{
			break;
		}
		str++;
	}
	if(*str=='\0')
	{
		return false;
	}
	else
	{
		return true;
	}
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and Check character present or not String
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	char cValue='\0';
	bool bRet;
	
	printf("enter the string\n");
	gets(Arr);
	
	printf("Enetr search character \n");
	scanf("%c",&cValue);
	
	bRet=CheckChar(Arr,cValue);
	if(bRet==true)
	{
		printf(" %c is the present in string\n",cValue);
	}
	else
	{
		printf("%c is not present in string\n",cValue);
	}
	
	return 0;
}