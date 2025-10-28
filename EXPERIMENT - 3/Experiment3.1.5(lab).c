/* Write a C program to count numbers of leap year betwee two inputted by the user*/
#include<stdio.h>
int main()
{
   printf ("Puneet Kandiyal\nSAP ID: 590025456\nCourse- BSc CS\nBatch-1");  
   printf("\n---------------------------------------------------------------\n");
	int yr1, yr2, i, c=0;
	printf("Enter the first year:"); scanf("%d", &yr1);
	printf("\nEnter the second year:"); scanf("%d", &yr2);
	for(i= yr1; i<=yr2; i++)
	{
		if(((i%4==0) && (i%100!=0)) && (i%400))
		{
			c++;
		}
	}
	printf("\nThe number of leap years between year %d and year %d is: %d", yr1, yr2, c);
}
