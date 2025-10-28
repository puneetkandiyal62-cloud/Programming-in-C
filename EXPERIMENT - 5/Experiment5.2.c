/*Experiment 5: Variable and Scope of Variable
5.2. Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function.*/
#include <stdio.h>

// Global variable
int globalVar = 10;

void testFunction() {
    int localVar = 20;  // Local variable
    printf("Inside function:\n");
    printf("Local variable = %d\n", localVar);
    printf("Global variable = %d\n", globalVar);
}

int main() {
	printf ("Puneet Kandiyal\nSAP ID: 590025456\nCourse- BSc CS\nBatch-1");  
    printf("\n---------------------------------------------------------------\n");
    testFunction();
    
    printf("\nOutside function:\n");
    // printf("Local variable = %d\n", localVar);  //  not accessible outside
    printf("Global variable = %d\n", globalVar);   //  Accessible everywhere

    return 0;
}

