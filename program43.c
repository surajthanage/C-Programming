#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
//
// Function name : DisplayRange
// Description   : use to perfrom of N numbers
// Input	      : Integer,Integer,Integer
// Output	      : Integer
// Date	          : 11/04/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

void DisplayRange(int Arr[],int iLength,int iNo1,int iNo2)
{
	int iCnt=0;

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>iNo1 && Arr[iCnt]<iNo2)
		{
			printf("		%d",Arr[iCnt]);
		}
	}
}

///////////////////////////////////////////////////////////////////////////////
//Accept N number from user and accept range,Dispaly all the element on range;
////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iSize=0,iValue1=0,iValue2=0,iCnt=0;
	int *ptr=NULL;
	
	printf("enter size of element\n");
	scanf("%d",&iSize);
	
	printf("enter starting number \n");
	scanf("%d",&iValue1);
	
	printf("enter ending number \n");
	scanf("%d",&iValue2);
	
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
	
	 DisplayRange(ptr,iSize,iValue1,iValue2);
	
	free(ptr);
	return 0;
}
///////////////////////////////////////////////
//
// Input	:	 6
// Element :		50	62	90	70	80	85
// output	:	 62		70		80		85
//			
////////////////////////////////////////////////