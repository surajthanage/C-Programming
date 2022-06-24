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
int SumDigit(int iNo)
{
	int iSum=0;
	int iDigit;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
	}
	return iSum;
}
int main()
{
	
	int iValue=0;
	int iRet=0;
	printf("Enter number \n");
	scanf("%d",&iValue);
	
	iRet=SumDigit(iValue);
	printf("Addition is : %d\n",iRet);
	
	return 0;
}