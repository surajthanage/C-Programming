#include<stdio.h>
#include<stdbool.h>


//////////////////////////////////////////////////////////////////////
//
// Function name  : Display
// Description    : use to perfrom Display ASCII value
// Input		   : Character
// Output		   : Character
// Date			: 25/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

bool Display(char ch)
{
	printf("Decimal : %d\t  Octal : %o\t  Hexadecimal   :%x\t",ch,ch,ch);
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and Display ASCII value
/////////////////////////////////////////////////////////////////////////

int main()
{
	char cValue='\0';
	printf("enter the string\n");
	scanf("%c",&cValue);
	
	Display(cValue);
	return 0;
}