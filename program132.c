#include<stdio.h>

//	*	*	*	*

void DisplayI()
{
	auto int iCnt=0;
	
	while(iCnt<4)
	{
		printf("* ");
		iCnt++;
	}
	printf("\n");
}

void DisplayR()
{
	int iCnt=0;			//static important
	
	if(iCnt<4)
	{
		printf("* ");
		iCnt++;
		DisplayR();
	}
}

int main()
{
	//DisplayI();
	DisplayR();
	
	return 0;
}