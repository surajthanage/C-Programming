#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
//
// Function name : Count
// Description   : use to perfrom of N numbers
// Input	      : Integer
// Output	      : Integer
// Date	          : 7/04/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

int Count(int Arr[],int iLength)
{
	register int iCnt=0;
	auto int iCount=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==11)
		{
			iCount++;
		}
	}
	return iCount;
}
////////////////////////////////////////////////////////////////
//Accept N number from user and return frequency of 11 from it.
/////////////////////////////////////////////////////////////////

int main()
{
	auto int iSize=0,iRet=0;
	int *ptr=NULL;
	register int iCnt=0;
	printf("Enter Size of element\n");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	if(ptr==NULL)
	{
		printf("Unble to allocate memory\n ");
		return -1;
	}
	
	printf("Enter element\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter element %d\t",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Count(ptr,iSize);
	printf("Number of 11 is :%d\t ",iRet);
	
	free(ptr);
	return 0;
}
///////////////////////////////////////////////
//
// Input	:	6
// Element :	66	11	45	66	23	52
// freq no :    11
// output	:	  1
//			
////////////////////////////////////////////////