#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
//
// Function name : ProductOdd
// Description   : use to perfrom of N numbers
// Input	      : Integer
// Output	      : Integer
// Date	          : 9/04/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

int ProductOdd(int Arr[],int iLength)
{
	int iCnt=0;
	int iMult=0;

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2!=0)
		{
			
			iMult=iMult*Arr[iCnt];
		}
	}
	return iMult;
}
///////////////////////////////////////////////////////////////////
//Accept N number from user and return product of all odd number
///////////////////////////////////////////////////////////////////

int main()
{
	int iSize=0,iCnt=0,iRet=0;
	int *ptr=NULL;
	
	printf("enter size of element\n");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	if(ptr==NULL)
	{
		printf("Unble to allocate memory\n");
		return -1;
	}
	
	printf("Enter %d element is \n",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter Element %d\t",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=ProductOdd(ptr,iSize);
	printf("Product of all odd number is : %d \n",iRet);
	free(ptr);
	return 0;
}
///////////////////////////////////////////////
//
// Input	:	 6
// Element :		3	2	6	5	7	6
// output	:	 	105
//			
////////////////////////////////////////////////