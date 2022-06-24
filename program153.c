#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdbool.h>
#include<string.h>

#define FILESIZE 1024

///////////////////////////////////////////////////////////////////////////
// Function Name  : FileCompair
// Description    : accept 2 file from user and compair both file
// Date			   : 8/06/2022
// Author		   : Suraj Sanjay Thanage
//
////////////////////////////////////////////////////////////////////////////
bool FileCompair(char Source[],char Destination[])
{
	int FdSrc=0,FdDest=0;
	char Buffer1[FILESIZE];
	char Buffer2[FILESIZE];
	int iRet1=0,iCmp=0;
	int iRet2=0;
	
	FdSrc=open(Source,O_RDONLY);
	if(FdSrc==-1)
	{
		printf("Unable to open file\n");
		return false;
	}
	
	FdDest=open(Destination,O_RDONLY);
	if(FdDest==-1)
	{
		printf("Unable to open file\n");
		return false;
	}
	
	while(1)
	{
		iRet1=read(FdSrc,Buffer1,FILESIZE);
		iRet2=read(FdDest,Buffer2,FILESIZE);
		
		if((iRet1==0)||(iRet2==0)||(iRet1!=iRet2))
		{
			break;
		}
		iCmp=memcmp(Buffer1,Buffer2,iRet1);
		if(iCmp!=0)
		{
			break;
		}
	}
	
	if(iRet1==0 && iRet2==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

////////////////////////////////////////////////////////////////////////////////////
// Accept two files from user and compair both file
//////////////////////////////////////////////////////////////////////////////////////

int main()
{
	char Fname1[20];
	char Fname2[20];
	bool bRet;
	
	printf("Enter file name which contain the data \n");
	scanf("%s",Fname1);
	
	printf("Enter file name which contain the data \n");
	scanf(" %[^'\n']s",Fname2);
	
	bRet=FileCompair(Fname1,Fname2);
	if(bRet==true)
	{
		printf("Both file are same\n");
	}
	else{
		printf("Both file are not same\n");
	}
	return 0;
}