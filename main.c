#include <stdio.h>

int main() {
    int choice;          // Stores the user’s operation choice
    double num1, num2;   // Stores the two numbers
    double result;       // Stores the result of the calculation

    // Step 1: Ask what operation to do
    printf("Choose operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    scanf("%d", &choice);

    // Step 2: Ask for two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Step 3: Do the calculation based on choice
    switch(choice) {
        case 1: result = num1 + num2; break; // Add
        case 2: result = num1 - num2; break; // Subtract
        case 3: result = num1 * num2; break; // Multiply
        case 4: // Divide
            if(num2 != 0) result = num1 / num2;
            else { 
                printf("Cannot divide by zero.\n"); 
                return 1; 
            }
            break;
        default: printf("Invalid choice.\n"); return 1; // If user enters wrong number
    }

    // Step 4: Show the result
    printf("Result: %.2lf\n", result);
    return 0;
}
