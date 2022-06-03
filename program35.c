#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
//
// Function name : EvenCnt
// Description   : use to perfrom of N numbers
// Input	      : Integer
// Output	      : Integer
// Date	          : 7/04/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

int EvenCnt(int Arr[],int iLength)
{
	register int iCnt=0;
	
	auto int iECnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iECnt++;
		}
	}
	return iECnt;
}

////////////////////////////////////////////////////////////////
//Accept N number from user and return frequncy of even number
////////////////////////////////////////////////////////////////

int main()
{
	auto int iSize=0,iRet=0;
	register int iCnt=0;
	int *ptr=NULL;
	
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
	
	iRet=EvenCnt(ptr,iSize);
	printf("Number of Even count is :%d\t",iRet);
	
	free(ptr);
	return 0;
}
///////////////////////////////////////////////
//
// Input	:	 6
// Element :	66	52	45	66	23	52
// output	:	 4
//			
////////////////////////////////////////////////