
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
	
///////////////////////////////////////////////////////////////
//
// Function name : Check
// Description   : use to perfrom check present number
// Input	      : Integer
// Output	      : boolean
// Author		   : Suraj Sanjay Thanage
//////////////////////////////////////////////////////////////

BOOL Check(int Arr[],int iLength,int iNo)
{
	register int iCnt=0;

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			break;
		}
	}	
	if(Arr[iCnt]==iNo)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
////////////////////////////////////////////////////////////////////////
// Accept N number from user and accept one another number of No and
// Check no is present or not
////////////////////////////////////////////////////////////////////////
int main()
{
	int iSize=0,iValue=0;
	int*ptr=NULL;
	register int iCnt=0;
	BOOL bRet=FALSE;
	
	printf("Enter size of element\n");
	scanf("%d",&iSize);	
	
	printf("Enter anothe No number is \n");
	scanf("%d",&iValue);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	if(ptr==NULL)
	{
		printf("Unble to allocate memory\n");
		return -1;
	}
	
	printf("Enter  %d Element\n",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter Element %d\t",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	bRet=Check(ptr,iSize,iValue);
	if(bRet==TRUE)
	{
		printf("%d is present \n",iValue);
	}
	else
	{
		printf("%d is not present\n",iValue);
	}
	
	free(ptr);
	
	return 0;
}

//////////////////////////////////////////////////////
// Input   : 11	25	36	25	36	15		iNo=25
// Output  : 25 is present
//////////////////////////////////////////////////////