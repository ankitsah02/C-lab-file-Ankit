/* Program 1: Count positives, negatives and zeros
   Enter numbers until user chooses to stop (enter 'n' when asked).
*/

#include <stdio.h>

int main() {
    int num;
    char choice = 'y';
    int pos = 0, neg = 0, zero = 0;

    while (choice == 'y' || choice == 'Y') {
        printf("Enter an integer: ");
        if (scanf("%d", &num) != 1) {
            // clear input if invalid
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
            printf("Invalid input. Try again.\n");
            continue;
        }

        if (num > 0) pos++;
        else if (num < 0) neg++;
        else zero++;

        printf("Do you want to enter another number? (y/n): ");
        // read next non-space character
        do {
            choice = getchar();
        } while (choice == '\n' || choice == ' ' || choice == '\t');

        // consume rest of the line
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}
    }

    printf("\nResults:\n");
    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Zeroes: %d\n", zero);

    return 0;
}
