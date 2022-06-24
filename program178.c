#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

///////////////////////////////////////////////////////////////////////////
//
// Function Name  : CountwhiteSpace
// Description    : use to perfrom file to count while space  
// Date	          : 15/06/2022
// Author	      : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////////////////////////

int CountWhiteSpace(char Source[])
{
	int iCnt=0,fd=0,iRet=0,i=0;
	char Data[20];
	
	fd=open(Source,O_RDONLY);
	
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
			if(Data[i]==' ')
			{
				iCnt++;
			}
		}
	}
	return iCnt;
	close(fd);
}


///////////////////////////////////////////////////////////////////////////
// Accept the file from user and count white space that file 
///////////////////////////////////////////////////////////////////////////
int main()
{
	char Fname[20];
	int iRet=0;
	
	printf("Enter file name \n");
	scanf("%s",Fname);
	
	iRet=CountWhiteSpace(Fname);
	printf("total white space  in that file are :%d\n",iRet);
	
	return 0;	
}

///////////////////////////////////////////////////////
//
// Input	:	hello.text
// output	:	File successfully create
//
///////////////////////////////////////////////////////