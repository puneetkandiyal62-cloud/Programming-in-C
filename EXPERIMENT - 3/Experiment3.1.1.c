/*Experiment3.1
1. write a c program to check wether a number is even or odd*/
#include<stdio.h>
int main()
{
	printf("Puneet Kandiyal\nSAP ID: 590025456\nCourse- BSc CS\nBatch-1");
	printf("\n---------------------------------------------------------------------------------\n");
	int a;
	printf("Enter the number to be checked:"); scanf("%d", &a);
	if((a%2)==0)
	{
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}
	return 0;
}
