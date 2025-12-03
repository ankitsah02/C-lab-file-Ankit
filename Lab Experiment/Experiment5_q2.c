#include <stdio.h>

int main() {
    int n;
    printf("n : ");
    scanf("%d", &n);

    int pos = 0, neg = 0, odd = 0, even = 0, x;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);

        if (x > 0) pos++;
        else if (x < 0) neg++;

        if (x % 2 == 0) even++;
        else odd++;
    }

    printf("pos = %d neg = %d odd = %d even = %d\n",
            pos, neg, odd, even);

    return 0;
}
