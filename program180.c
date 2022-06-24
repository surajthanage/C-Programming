#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

///////////////////////////////////////////////////////////////////////////
//
// Function Name  : CountChar
// Description    : use to perfrom file to count character  
// Date	          : 15/06/2022
// Author	      : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////////////////////////

void CountChar(char Source[],int ch)
{
	int iCnt=0,fd=0,iRet=0,i=0;
	char Data[20];
	//char Ch='\0';
	
	fd=open(Source,O_RDWR);
	
	if(fd==-1)
	{
		printf("Unble to open file\n");
		return;
	}
	
	printf("File are succesfully open with fd is : %d\n",fd);
	
	lseek(fd,0,ch);
	read(fd,Data,ch);
	write(1,Data,ch);
	
	close(fd);
}


///////////////////////////////////////////////////////////////////////////
// Accept the file from user and count character that file 
///////////////////////////////////////////////////////////////////////////
int main()
{
	char Fname[20];
	int iRet=0;
	int Ch=0;
	
	printf("Enter number you want to read data after that number  \n");
	scanf("%d",&Ch);
	
	printf("Enter file name \n");
	scanf("%s",Fname);

	CountChar(Fname,Ch);
	
	return 0;	
}

///////////////////////////////////////////////////////
//
// Input	:	hello.text
// output	:	File successfully create
//
///////////////////////////////////////////////////////