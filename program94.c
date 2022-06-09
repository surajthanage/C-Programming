#include<stdio.h>
#include<stdbool.h>


//////////////////////////////////////////////////////////////////////
//
// Function name  : DisplayDigit
// Description    : use to perfrom string and Display Digt of String
// Input		   : String
// Output		   : String
// Date		   : 27/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

void strDigitX(char *str)
{
	int iDigit=0;
	while(*str!='\0')
	{
		if((*str>='0')&&(*str<='9'))
		{
			printf("%c",*str);
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
	
	printf("enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	strDigitX(Arr);
	
	
	return 0;
}