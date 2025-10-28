 /* Experiment 2: Operators
1. WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.*/

 #include<stdio.h>
int main()
{
	printf ("Puneet Kandiyal\nSAP ID: 590025456\nCourse- BSc CS\nBatch-1");  
    printf("\n-------------------------------------------------------------\n");
	int per, ar, a,b;
	printf("Enter width and length of the rectangle:");
	scanf("%d%d", &a, &b);
	per= a+a+b+b;
	ar=a*b;
	printf("The perimeter and area of the given rectangle is %d %d", per, ar);
	return 0;
}
