/* 4.3 Patterns: 6*/
#include<stdio.h>
int main()
{
	printf ("Puneet Kandiyal\nSAP ID: 590025456\nCourse- BSc CS\nBatch-1");  
    printf("\n-------------------------------------------------------------\n");
	printf("The pattern is:\n");
	int i, j;
	for(i=1; i<=5; i++)
	{
		for(j=6-i; j>=1; j--)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}
