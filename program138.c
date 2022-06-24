#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

//////////////////////////////////////////////////////////////////////
//
// Description    : open the file 
// Date			   : 5/06/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

int main()
{
	char Fname[20];

	
	printf("Enter file name to open \n");
	scanf("%s",Fname);
	
	fd=open(Fname,O_RDONLY);
	
	if(fd==-1)
	{
		printf("Unble to open the file\n");
		return -1;
	}
	printf("File is succefully opened with fd %d\n",fd);
	
	
	return 0;
}