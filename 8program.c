#include <stdio.h> // Includes the standard input/output library for functions like printf and scanf

int main() { // Main function where the program execution begins
    int units; // Declares an integer variable 'units' to store the number of units consumed
    float bill, interest, total_bill; // Declares float variables for bill amount, interest, and total bill

    printf("Enter the units: "); // Prompts the user to enter the electricity units consumed
    // scanf("%d", &units); // This line is commented out in the image, but would be used to read user input for 'units'

    // The image specifies "Jst 50 units", implying a fixed scenario for calculation.
    // Therefore, assuming units = 50 for this specific problem as per the image's context.
    units = 50; 

    // Calculation logic for electricity bill (assuming a rate and interest calculation)
    // The specific calculation details are not fully visible in the image, 
    // but a common scenario involves a rate per unit and potentially an interest/surcharge.
    // For demonstration, let's assume a rate of 5 per unit and 10% interest.
    bill = units * 5.0; // Calculate the base bill (e.g., 50 units * 5/unit)
    interest = bill * 0.10; // Calculate 10% interest on the bill
    total_bill = bill + interest; // Calculate the total bill

    printf("Electricity Bill for %d units: %.2f\n", units, total_bill); // Prints the calculated total bill
    
    return 0; // Indicates successful program execution
}