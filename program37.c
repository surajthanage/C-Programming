
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

///////////////////////////////////////////////////////////////
//
// Function name : Check
// Description   : use to perfrom of N numbers
// Input	      : Integer
// Output	      : BOOL
// Date	          : 7/04/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

BOOL Check(int Arr[],int iLength)
{
	register int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==11)
		{
			break;
		}
	}
	if(Arr[iCnt]==11)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
/////////////////////////////////////////////////////////////////////////////////////
//Accept N number from user and Check whether that numbers contain 11 in it or not.
////////////////////////////////////////////////////////////////////////////////////

int main()
{
	auto int iSize;
	int *ptr=NULL;
	register int iCnt=0;
	BOOL bRet=FALSE;
	
	printf("Enter size of element\n");
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
	
	bRet=Check(ptr,iSize);
	if(bRet==TRUE)
	{
		printf(" 11 is present\n");
	}
	else
	{
		printf("11 is not present\n");
	}
	free(ptr);
	return 0;
}

///////////////////////////////////////////////
//
// Input	:	 6  
// check no:	11
// Element :	66	52	45	66	23	52
// output	:	 FALSE
//			
////////////////////////////////////////////////