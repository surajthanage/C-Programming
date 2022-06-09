#include<stdio.h>
#include<stdbool.h>


//////////////////////////////////////////////////////////////////////
//
// Function name  : Display
// Description    : use to perfrom Display up to z 
// Input		   : Character
// Output		   : Character
// Date			: 25/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

void Display(char ch)
{
	int i='\0';
	if((ch>='A')&&(ch<='Z'))
	{
		for(i=ch;i<='Z';i++)
		{
		  printf(" %c\t",i);
		}
	}
	else if((ch>='a')&&(ch<='z'))
	{
		for(i=ch;i>='a';i--)
		{
		  printf(" %c\t",i);
		}
	}


}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and Display up to z from given character
/////////////////////////////////////////////////////////////////////////

int main()
{
	char cValue='\0';
	printf("enter the string\n");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	
}