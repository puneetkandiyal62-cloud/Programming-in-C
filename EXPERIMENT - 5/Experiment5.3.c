/*Experiment 5: Variable and Scope of Variable
5.3. Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.*/
#include <stdio.h>

int main() {
	printf ("Puneet Kandiyal\nSAP ID: 590025456\nCourse- BSc CS\nBatch-1");  
    printf("\n---------------------------------------------------------------\n");
    int a = 5; // Declared in main block
    printf("a = %d\n", a);

    {
        int b = 10; // Declared in inner block
        printf("Inside inner block: a = %d, b = %d\n", a, b);
    }

    // printf("Outside inner block: b = %d\n", b); // b not accessible here

    {
        int c = 15;
        printf("Inside another block: a = %d, c = %d\n", a, c);
    }

    // printf("Outside another block: c = %d\n", c); 

    return 0;
}

