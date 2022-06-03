#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
//
// Function name : Frequency
// Description   : use to perfrom of N numbers
// Input	      : Integer,Integer
// Output	      : Integer
// Date	          : 9/04/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

int Frequency(int Arr[],int iLength,int iNo)
{
	register int iCnt=0;
	auto int iCount=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			iCount++;
		}
	}
	return iCount++;
}

/////////////////////////////////////////////////////////////////////////////////
//Accept N number from user and accept another number and return  frequncy of No 
//////////////////////////////////////////////////////////////////////////////////

int main()
{
	auto int iSize=0,iValue=0;
	int*ptr=NULL;
	register int iCnt=0;
	auto int iRet=0;
	
	printf("Enetr Size of element\n");
	scanf("%d",&iSize);
	
	printf("Enter another No number\n");
	scanf("%d",&iValue);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	if(ptr==NULL)
	{
		printf("Unble to allocate memory\n");
		return -1;
	}
	
	printf("Enetr %d element is \n",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter element %d\t",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Frequency(ptr,iSize,iValue);
	printf("Frequency of No is : %d  ",iRet);
	
	free(ptr);
	
	
	return 0;
}
///////////////////////////////////////////////
//
// Input	:	 6
// iNo		:	66
// Element :	66	52	45	66	23	52
// output	:	 2
//			
////////////////////////////////////////////////