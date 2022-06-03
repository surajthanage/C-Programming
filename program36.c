#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
//
// Function name : DiffEvenOddCnt
// Description   : use to perfrom of N numbers
// Input	      : Integer
// Output	      : Integer
// Date	          : 7/04/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

int DiffEvenOddCnt(int Arr[],int iLength)
{
	register int iCnt=0;
	auto int iDiff=0,iECnt=0,iOCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iECnt++;
		}
		else if(Arr[iCnt]%2!=0)
		{
			iOCnt++;
		}
		iDiff=iECnt-iOCnt;
	}
	return iDiff;
	
}

////////////////////////////////////////////////////////////////////////////
//Accept N number from user and return difference freq of even & odd number
////////////////////////////////////////////////////////////////////////////
int main()
{
	auto int iSize=0,iRet=0;
	register int iCnt=0;
	int *ptr=NULL;
	
	printf("Enter Size of element\n");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	if(ptr==NULL)
	{
		printf("Unble to allocate memory\n");
		return -1;
	}
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter element :%d\t",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=DiffEvenOddCnt(ptr,iSize);
	printf("Difference of count Even and Odd Element is :  %d",iRet);
	
	free(ptr);
	return 0;
}
///////////////////////////////////////////////
//
// Input	:	 6
// Element :	66	52	45	66	23	52
// output	:	2
//			
////////////////////////////////////////////////