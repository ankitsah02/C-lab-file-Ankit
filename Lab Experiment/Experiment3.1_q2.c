#include <stdio.h>

int main() {
    // Compute BMI and print category
    float weight, height, bmi;
    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);

    if (height <= 0) {
        printf("Invalid height.\n");
        return 1;
    }

    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);

    // Determine category
    if (bmi < 15.0) {
        printf("Category: Starvation\n");
    } else if (bmi >= 15.0 && bmi <= 17.5) {
        printf("Category: Anorexic\n");
    } else if (bmi > 17.5 && bmi <= 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi > 18.5 && bmi <= 24.9) {
        printf("Category: Normal weight\n");
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        printf("Category: Overweight\n");
    } else {
        printf("Category: Obese\n");
    }
    return 0;
}
