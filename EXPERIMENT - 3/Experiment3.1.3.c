/*Experiment 3.1: Conditional Statements
3. WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts). */
#include<stdio.h>
int main()
{
	printf ("Puneet Kandiyal\nSAP ID: 590025456\nCourse- BSc CS\nBatch-1");  
    printf("\n---------------------------------------------------------------\n");
	double bmi, wt, ht;
    printf("Enter the weight in kilograms and height in meters of the person:");
	scanf("%lf %lf", &wt, &ht);
	bmi=wt/(ht*ht);
	printf("BMI of the given person is: %.2lf\n ", bmi);
    if(bmi<=15)
	{
		printf("The person is suffering from starvation");
	}
	else if(15.1<=bmi && bmi<=17.5)
	{
		printf("The person is suffering from Anorexic ");
	}
	else if(17.6<=bmi && bmi<=18.5)
	{
		printf("The person is suffering from underweight");
	}
	else if(18.6<=bmi && bmi<=24.9)
	{
		printf("The person's BMI is ideal ");
	}
	else if(25<=bmi && bmi<=29.9)
	{
		printf("The person is suffering from Overweight ");
	}
	else if(30<=bmi && bmi<=39.9)
	{
		printf("The person is suffering from Obesity ");
	}
	else if(40.0<=bmi)
	{
		printf("The person is suffering from Morbidity Overweight ");
	}
	return 0;
}

