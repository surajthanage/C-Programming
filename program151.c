#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define FILESIZE 1024

///////////////////////////////////////////////////////////////////////////
// Function Name  : FileCopy
// Description    : accept file from user and create another file to copy
// Date			   : 7/06/2022
// Author		   : Suraj Sanjay Thanage
//
////////////////////////////////////////////////////////////////////////////
void FileCopy(char Source[],char Destination[])
{
	int FdSrc=0,FdDest=0;
	char Buffer[FILESIZE];
	int iRet=0;
	
	FdSrc=open(Source,O_RDONLY);
	if(FdSrc==-1)
	{
		printf("Unable to open file\n");
		return;
	}
	
	FdDest=creat(Destination,0777);
	if(FdDest==-1)
	{
		printf("Unable to create file\n");
		return;
	}
	
	while((iRet=read(FdSrc,Buffer,FILESIZE))!=0)
	{
		write(FdDest,Buffer,iRet);
	}
}

////////////////////////////////////////////////////////////////////////////////////
// accept file from user and create another file and copy that data to create file //////////////////////////////////////////////////////////////////////////////////////

int main()
{
	char Fname1[20];
	char Fname2[20];
	
	printf("Enter file name which contain the data \n");
	scanf("%s",Fname1);
	
	printf("Enter file name you want to create \n");
	scanf(" %[^'\n']s",Fname2);
	
	FileCopy(Fname1,Fname2);
	
	return 0;
}