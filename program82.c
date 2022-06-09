#include<stdio.h>
#include<stdbool.h>


//////////////////////////////////////////////////////////////////////
//
// Function name  : Display
// Description    : use to perfrom Display case change character
// Input		   : Character
// Output		   : Character
// Date			: 25/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

void Display(char ch)
{
	if((ch>='A')&&(ch<='Z'))
	{
		ch=ch+32;
		printf("after change case %c\n",ch);
	}
	else if((ch>='a')&&(ch<='z'))
	{
		ch=ch-32;
		printf("after change case %c\n",ch);
	}
}
///////////////////////////////////////////////////////////////////////
// Accept character from user and check whether it is capital or not
///////////////////////////////////////////////////////////////////////

int main()
{
	char cValue='\0';
	printf("enter the string\n");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	
}