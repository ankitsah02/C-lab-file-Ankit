#include <stdio.h>

int main() {
    double population = 100000.0;
    double rate = 0.10; // 10%
    int years = 10;

    printf("Year\tPopulation (end of year)\n");
    for (int y = 1; y <= years; y++) {
        population = population * (1.0 + rate);
        // Print as integer if you prefer integer population
        printf("%2d\t%.0f\n", y, population);
    }

    return 0;
}
