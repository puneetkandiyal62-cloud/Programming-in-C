/* Experiment 3.1: Conditional Statements 
4. WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not. */

#include<stdio.h>
int main()
{
	printf ("Puneet Kandiyal\nSAP ID: 590025456\nCourse- BSc CS\nBatch-1");  
    printf("\n-------------------------------------------------------------\n");
	double x1, x2, y1, y2, x3, y3, z;
	printf("Enter (x1,y1):"); scanf("%lf %lf", &x1, &y1);
	printf("Enter (x2,y2):"); scanf("%lf %lf", &x2, &y2);
	printf("Enter (x3,y3):"); scanf("%lf %lf", &x3, &y3);
	z=(x1*(y2-y3)-y1*(x2-x3)+(x2*y3)-(y2*x3))/2;
	if(z==0)
	{
		printf("The points are collinear!");
	}
	else
	{
		printf("The points are not collinear!");
	}
	return 0;
}
