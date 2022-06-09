#include<stdio.h>
#include<stdbool.h>


//////////////////////////////////////////////////////////////////////
//
// Function name  : DisplayShedule
// Description    : use to perfrom Display Shedule of a exam
// Input		   : Character
// Output		   : Character
// Date			: 25/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

void DisplayShedule(char ch)
{
	if((ch>='a')&&(ch<='d'))
	{
		ch=ch-32;
	}
		switch(ch)
		{
			case 'A':
				printf("your exam at 7 Am\n");
				break;
				
			case 'B':
				printf("your exam at 8.30 Am\n");
				break;
				
			case 'C':
				printf("your exam at 9.20 Am\n");
				break;
				
			case 'D':
				printf("your exam at 10.30 Am\n");
				break;
				
			default:
			printf("Invalid division\n");
		}		
}
///////////////////////////////////////////////////////////////////////
// Accept character from user and Display exam Shedule of division
///////////////////////////////////////////////////////////////////////

int main()
{
	char cValue='\0';

	printf("enter the string\n");
	scanf("%c",&cValue);
	
	DisplayShedule(cValue);
	
}