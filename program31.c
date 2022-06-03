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

void Display(int Arr[],int iLength)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%3==0 &&Arr[iCnt]%5==0 )
		{
			printf("%5d",Arr[iCnt]);
		}
	}
}
//////////////////////////////////////////////////////////////////////////////////////////
// Aaccept N number from user and Display all such element which are divisible by 3 nd 5
//////////////////////////////////////////////////////////////////////////////////////////
int main()
{
	int iCnt=0,iSize=0;
	int *p=NULL;
	
	printf("Enter size of element\n");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize*sizeof(int));
	
	if(p==NULL)
	{
		printf("Unble to allocate memory\n");
		return -1;
	}
	
	printf("Enter %d element\n",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter element : %d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	
	Display(p,iSize);
	
	free(p);
	
	return 0;
}
///////////////////////////////////////////////
//
// Input	:		6
// Element :	66	52	45	66	15	52	 
// output	:	 45		15
//			
////////////////////////////////////////////////