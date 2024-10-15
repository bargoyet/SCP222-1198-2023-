#include <stdio.h>

int main(void) {
    float start, end, increment;

    // Accept user inputs for the temperature range and increment
    printf("Enter the starting Fahrenheit value: ");
    scanf("%f", &start);
    printf("Enter the ending Fahrenheit value: ");
    scanf("%f", &end);
    printf("Enter the increment value: ");
    scanf("%f", &increment);

    // Print the heading
    printf("\nFahrenheit to Celsius Conversion Table:\n");
    printf("Fahrenheit\tCelsius\n");
    printf("----------------------\n");

    // Convert Fahrenheit to Celsius and print the table
    for (float f = start; f <= end; f += increment) {
        float c = (f - 32) * 5 / 9;
        printf("%.2f\t\t%.2f\n", f, c);
    }

    return 0;
}
