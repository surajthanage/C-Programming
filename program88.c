#include<stdio.h>
#include<stdbool.h>


//////////////////////////////////////////////////////////////////////
//
// Function name  : CountSmall
// Description    : use to perfrom Count Small latter
// Input		   : String
// Output		   : Integer
// Date			: 26/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
	int iCntCap=0;
	int iCntSma=0;
	
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			iCntCap++;
		}
		
		else if((*str>='a')&&(*str<='z'))
		{
			iCntSma++;
		}
		str++;
	}
	return (iCntCap-iCntSma);
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and Count Small latter
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	int iRet=0;
	printf("enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=CountSmall(Arr);
	printf("Difference of capital count and small count character is  : %d\n",iRet);
	
	return 0;
}