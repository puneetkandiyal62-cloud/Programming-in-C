/*Experiment 3.1: Conditional Statements 
2. WAP to take check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user. */
#include<stdio.h>
int main()
{
	printf ("Puneet Kandiyal\nSAP ID: 590025456\nCourse- BSc CS\nBatch-1");  
    printf("\n---------------------------------------------------------------\n");
	printf("Enter the measurments of each side of the triangle:");
	double s1, s2, s3, a, b, c;
	scanf("%lf %lf %lf", &s1, &s2, &s3);
	a= s1*s1;
	b= s2*s2;
	c= s3*s3;
	if((s1+s2>s3) || (s1+s3>s2) || (s3+s2>s1))
	{
		printf("The entered triangle is valid\n");
		if (s1==s2 && s2==s3)
		{ 
			printf("The triangle is equilateral triangle.");
		}
		else if (s1==s2 || s2==s3 || s3==s1)
		{
			printf("The triangle is isosceles triangle. ");
		}
		else if (a==b+c || c==b+a || b==c+a)
		{
			printf("The triangle is right angle triangle.");
		}
		else if (s1!=s2 && s2!=s3 && s3!=s1)
		{
			printf("The triangle is scalene triangle.");
		}
	}
	else
	{
		printf("invalid triangle!");
	}
	return 0;
}
