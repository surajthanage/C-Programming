#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
// Description    : accept number from user and sum digit
// Date			   : 10/06/2022
// Author		   : Suraj Sanjay Thanage
//
////////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
	 static int i=0;
	if(i<iNo)
	{
		printf(" %c\t",('a'+i));
		i++;
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