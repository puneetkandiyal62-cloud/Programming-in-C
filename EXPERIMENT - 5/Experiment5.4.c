/*Experiment 5: Variable and Scope of Variable
5.4. Declare a static local variable inside a function. Observe how its value persists across function calls.*/
#include <stdio.h>

void counterFunction() {
	
    static int count = 0;  // Static local variable
    count++;
    printf("Function called %d times\n", count);
}

int main() {
	printf ("Puneet Kandiyal\nSAP ID: 590025456\nCourse- BSc CS\nBatch-1");  
    printf("\n---------------------------------------------------------------\n");
    counterFunction();
    counterFunction();
    counterFunction();
    return 0;
}

