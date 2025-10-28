/* Experiment 1: Installation, Environment Setup and starting with c language
    4. Write a C program to add two numbers, take numbers from user*/
#include<stdio.h>
int main()
{
	printf ("Puneet Kandiyal\nSAP ID: 590025456\nCourse- BSc CS\nBatch-1");  
    printf("\n----------------------------------------------------------------\n");
	int a,b,c;
	printf("Enter number a,b");
	scanf("%d%d", &a, &b);
	c = a + b;
	printf("The sun of numbers is %d", c);
	return 0;
}
