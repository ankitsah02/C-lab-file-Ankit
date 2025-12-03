#include <stdio.h>

int main() {
    int n;
    printf("n : ");
    scanf("%d", &n);

    int avr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &avr[i]);

    int target;
    printf("Target : ");
    scanf("%d", &target);

    int cnt = 0;

    for (int i = 0; i < n; i++)
        if (avr[i] == target) cnt++;

    printf("Frequency of %d = %d\n", target, cnt);

    return 0;
}
