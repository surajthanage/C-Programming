#include<stdio.h>
#include<stdbool.h>


//////////////////////////////////////////////////////////////////////
//
// Function name  : strtoggleX
// Description    : use to perfrom string and Convert toggle case
// Input		   : String
// Output		   : String
// Date		   : 26/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

void strtoggleX(char *str)
{
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			*str=*str-32;
		}
		else if((*str>='A')&&(*str<='Z'))
		{
			*str=*str+32;
		}
		str++;
	}
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and Convert toggle case
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	bool bRet=0;
	printf("enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	strtoggleX(Arr);
	printf("After converting toggle case string is : %s\n",Arr);
	
	
	return 0;
}