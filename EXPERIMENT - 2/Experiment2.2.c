/*Experiment 2: Operators 
    2. WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32. */
#include<stdio.h>

int main()
{
	double c, f;
	printf ("Puneet Kandiyal\nSAP ID: 590025456\nCourse- BSc CS\nBatch-1");  
    printf("\n-------------------------------------------------------------\n");
	printf("Enter the temprature in celsius");
	scanf("%lf", &c);
	f = (c * 9/5) + 32;
	printf("The entered temprature in fahrenheit is: %lf", f);
	return 0;
}
