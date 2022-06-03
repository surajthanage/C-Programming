#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
//
// Function name : Display
// Description   : use to perfrom of N numbers
// Input	      : Integer
// Output	      : Integer
// Date	          : 17/04/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

int Difference(int Arr[],int iLength)
{
	int iCnt=0,iSumE=0,iSumO=0,iDiff=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			iSumE=iSumE+Arr[iCnt];
		}
		else if((Arr[iCnt]%2)!=0)
		{
			iSumO=iSumO+Arr[iCnt];
		}
		iDiff=iSumE-iSumO;
	}
	return iDiff;
}


//////////////////////////////////////////////////////////////////////////////
// Accept number and Difference bet summation of even element and odd element
//////////////////////////////////////////////////////////////////////////////

int main()
{
	int iSize=0,iRet=0,iCnt=0;
	int*p=NULL;
	
	printf("Enter Size of element\n");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize*sizeof(int));
	
	if(p==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter %d element\n",iSize);
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter element : %d\n",iCnt+1);

		scanf("%d",&p[iCnt]);
	}
	
	iRet=Difference(p,iSize);
	printf("Result is : %d",iRet);
	
	free(p);
	
	return 0;
}
///////////////////////////////////////////////
//
// Input	:	 82376		2563	21532
// output	:	 6			-4			-5
//			
////////////////////////////////////////////////