#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
//
// Function name : FirstOcc
// Description   : use to perfrom of N numbers
// Input	      : Integer,Integer
// Output	      : Integer
// Date	          : 9/04/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

int FirstOcc(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	int iInd=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			iInd=iCnt;
			break;
		}
	}
	if(Arr[iInd]!=iNo)
	{
		return -1;
	}
	else if(Arr[iInd]==iNo)
	{
		return iInd;
	}
}

///////////////////////////////////////////////////////////////////////////////////////
//Accept N number from user and accept another number and return  First occuranc of No
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iSize=0,iValue=0,iCnt=0,iRet=0;
	int *ptr=NULL;
	
	printf("enter size of element\n");
	scanf("%d",&iSize);
	
	printf("enter anothe number of No is \n");
	scanf("%d",&iValue);
	
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
	
	iRet=FirstOcc(ptr,iSize,iValue);
	if(iRet==-1)
	{
		printf("There is no such number\n");
	}
	else
	{
		printf("First Occurance number is %d",iRet);
	}
	
	free(ptr);
	return 0;
}
///////////////////////////////////////////////
//
// Input	:	 6
// Element :	52	66	45	66	23	52
// output	:	 2
//			
////////////////////////////////////////////////