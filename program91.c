#include<stdio.h>
#include<stdbool.h>


//////////////////////////////////////////////////////////////////////
//
// Function name  : strlwrX
// Description    : use to perfrom string and Convert lower case
// Input		   : String
// Output		   : String
// Date			: 26/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

void strlwrX(char *str)
{
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			*str=*str+32;
		}
		str++;
	}
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and Check Convert lower case
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	bool bRet=0;
	printf("enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	strlwrX(Arr);
	printf("After converting lower case string is : %s\n",Arr);
	
	
	return 0;
}