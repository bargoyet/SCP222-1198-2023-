#include <stdio.h>

int main(void) {
    float start, end, increment;

    // Accept user inputs for the weight range and increment
    printf("Enter the starting weight in pounds: ");
    scanf("%f", &start);
    printf("Enter the ending weight in pounds: ");
    scanf("%f", &end);
    printf("Enter the increment value: ");
    scanf("%f", &increment);

    // Print the heading
    printf("\nPounds to Kilograms Conversion Table:\n");
    printf("Pounds\t\tKilograms\n");
    printf("------------------------\n");

    // Convert pounds to kilograms and print the table
    for (float lbs = start; lbs <= end; lbs += increment) {
        float kg = lbs * 0.453592; // Conversion factor
        printf("%.2f\t\t%.2f\n", lbs, kg);
    }

    return 0;
}
