#include <stdio.h>

int main() {
    // Convert temperature from Celsius to Fahrenheit
    float celsius, fahrenheit;
    printf("Temperature in Celsius: ");
    scanf("%f", &celsius);

    // formula: F = (C * 9/5) + 32
    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;
    printf("Temperature in Fahrenheit = %.2f°F\n", fahrenheit);
    return 0;
}
