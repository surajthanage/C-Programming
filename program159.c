#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


///////////////////////////////////////////////////////////////////////////
//
// Description    : accept number from user and sum digit
// Date			   : 10/06/2022
// Author		   : Suraj Sanjay Thanage
//
////////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
	static char ch='a';
	if(iNo>0)
	{
		printf(" %c\t",ch);
		iNo--;
		ch++;
		Display(iNo);
	}

}
int main()
{
	
	int iValue=0;
	int iRet=0;
	printf("Enter number \n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	
	return 0;
}