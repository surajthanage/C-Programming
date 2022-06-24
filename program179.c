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

int CountChar(char Source[],char ch)
{
	int iCnt=0,fd=0,iRet=0,i=0;
	char Data[20];
	//char Ch='\0';
	
	fd=open(Source,O_RDWR);
	
	if(fd==-1)
	{
		printf("Unble to open file\n");
		return -1;
	}
	
	printf("File are succesfully open with fd is : %d\n",fd);
	
	
	while((iRet=read(fd,Data,strlen(Data)))!=0)
	{
		for(i=0;i<iRet;i++)
		{
			if(Data[i]==ch)
			{
				iCnt++;
			}
		}
	}
	return iCnt;
	close(fd);
}


///////////////////////////////////////////////////////////////////////////
// Accept the file from user and count character that file 
///////////////////////////////////////////////////////////////////////////
int main()
{
	char Fname[20];
	int iRet=0;
	char Ch;
	
	printf("Enter you want to count occurance that character  \n");
	scanf("%c",&Ch);
	
	printf("Enter file name \n");
	scanf(" %[^'\n']s",Fname);
	
	
	
	
	iRet=CountChar(Fname,Ch);
	printf("total count character  in that file are :%d\n",iRet);
	
	return 0;	
}

///////////////////////////////////////////////////////
//
// Input	:	hello.text
// output	:	File successfully create
//
///////////////////////////////////////////////////////