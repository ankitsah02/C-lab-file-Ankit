#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Number of elements : ");
    scanf("%d", &n);

    int avr[n];
    for (int i = 0; i < n; i++) {
        printf("a[%d] : ", i);
        scanf("%d", &avr[i]);
    }

    int max = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (avr[i] > max) {
            second = max;
            max = avr[i];
        }
        else if (avr[i] > second && avr[i] != max) {
            second = avr[i];
        }
    }

    if (second == INT_MIN)
        printf("No second largest (all equal)");
    else
        printf("Second largest = %d\n", second);

    return 0;
}
