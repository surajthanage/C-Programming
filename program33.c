#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Description   : use to perfrom of N numbers
// Input	      : Integer
// Output	      : Integer
// Date	          : 17/04/2022
// Author	      : Suraj Sanjay Thanage
//
////////////////////////////////////////////////////////////////////////

void Display(int Arr[],int iLength)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%11==0)
		{
			printf("  %d",Arr[iCnt]);
		}
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//Write a program wich accept N number from user and Display all such element which are multiples of 11
/////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
	int iCnt=0,iSize=0;
	
	int*ptr=NULL;
	
	printf("Enter element of size\n");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	if(ptr==NULL)
	{
		printf("Unble to alloacte memory\n");
		return -1;
	}
	
	printf("Enter element of array\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter element : %d\t",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	Display(ptr,iSize);
		
	free(ptr);
	
	return 0;
}
///////////////////////////////////////////////
//
// Input	:	 6
// Element :	66	52	45	77	23	52
// output	:	 66		77
//			
////////////////////////////////////////////////