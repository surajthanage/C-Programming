#include<stdio.h>
#include<stdbool.h>


//////////////////////////////////////////////////////////////////////
//
// Function name  : struprX
// Description    : use to perfrom string and Convert upper case
// Input		   : String
// Output		   : String
// Date		   : 26/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

void struprX(char *str)
{
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			*str=*str-32;
		}
		str++;
	}
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and Convert upper case
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	bool bRet=0;
	printf("enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	struprX(Arr);
	printf("After converting upper case string is : %s\n",Arr);
	
	
	return 0;
}