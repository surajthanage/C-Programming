#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


#define FILESIZE 1024

///////////////////////////////////////////////////////////////////////////
// Function Name  : FileConcat
// Description    : accept 2 file from user and concatanation
// Date			   : 8/06/2022
// Author		   : Suraj Sanjay Thanage
//
////////////////////////////////////////////////////////////////////////////
void FileConcat(char Source[],char Destination[])
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
	
	FdDest=open(Destination,O_RDWR | O_APPEND);
	if(FdDest==-1)
	{
		printf("Unable to open file\n");
		return;
	}
	
	while((iRet=read(FdSrc,Buffer,FILESIZE))!=0)
	{
		write(FdDest,Buffer,iRet);
	}
	close(fdSrc);
	close(fdDest);
}

////////////////////////////////////////////////////////////////////////////////////
// accept 2 file from user and Concatanation file //////////////////////////////////////////////////////////////////////////////////////

int main()
{
	char Fname1[20];
	char Fname2[20];
	
	printf("Enter file name which contain the data \n");
	scanf("%s",Fname1);
	
	printf("Enter file name which contain the data \n");
	scanf(" %[^'\n']s",Fname2);
	
	FileConcat(Fname1,Fname2);
	
	return 0;
}