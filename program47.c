#include<stdio.h>
#include<stdlib.h>
	
//////////////////////////////////////////////////////////////////
//
// Function name : LastOcc
// Description   : use to perfrom last Occurance given number
// Input	      : Integer
// Output	      : Integer
// Author		   : Suraj Sanjay Thanage
/////////////////////////////////////////////////////////////////

int LastOcc(int Arr[],int iLength,int iNo)
{
	int iCnt=0;

	
	for(iCnt=iLength-1;iCnt<=0;iCnt--)
	{
		if(Arr[iCnt]==iNo)
		{
			iCnt;
		}
	}

		return iCnt;

}

//////////////////////////////////////////////////////////////////////
// Accept N number from user and accept one another number of No and
// return index of last occurrence of that No;
/////////////////////////////////////////////////////////////////////
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
	
	iRet=LastOcc(ptr,iSize,iValue);
	if(iRet==-1)
	{
		printf("There is no such number\n");
	}
	else
	{
		printf("last Occurance number is %d",iRet);
	}
	
	free(ptr);
	return 0;
}
//////////////////////////////////////////////////////
// Input   : 11	25	36	25	36	15		iNo=25
// Output  : 4 is last occurance
//////////////////////////////////////////////////////