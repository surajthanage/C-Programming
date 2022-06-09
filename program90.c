#include<stdio.h>
#include<stdbool.h>


//////////////////////////////////////////////////////////////////////
//
// Function name  : strrevX
// Description    : use to perfrom string and Reverse string
// Input		   : String
// Output		   : Integer
// Date			: 26/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

void strrevX(char *str)
{
	char *start=str;
	char *end=str;
	char cTemp;
	
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
	while(start<end)
	{
		cTemp=*start;
		*start=*end;
		*end=cTemp;
		
		start++;
		end--;
	}
	
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and Check Vowel contain or not
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	bool bRet=0;
	printf("enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	strrevX(Arr);
	printf("After reverse string is : %s\n",Arr);
	
	
	return 0;
}