#include <stdio.h>
#include <stdlib.h>

/* return 1 if leap year in Gregorian rules */
int is_leap(int y) {
    if (y % 400 == 0) return 1;
    if (y % 100 == 0) return 0;
    return (y % 4 == 0);
}

int main(void) {
    int year;
    printf("Enter year (e.g., 2025): ");
    if (scanf("%d", &year) != 1) return 0;

    int ref_year = 2001;
    /* day index: 0 = Monday (for 01-01-2001), 1 = Tuesday, ..., 6 = Sunday */
    long total_days = 0;

    if (year >= ref_year) {
        for (int y = ref_year; y < year; ++y) {
            total_days += (is_leap(y) ? 366 : 365);
        }
    } else {
        /* for years before 2001, go backwards (subtract days) */
        for (int y = year; y < ref_year; ++y) {
            total_days -= (is_leap(y) ? 366 : 365);
        }
    }

    int dayIndex = (int)((total_days % 7 + 7) % 7); /* normalize 0..6 */
    /* reference day is Monday -> index 0, so final index is dayIndex (0..6) */
    const char *names[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    printf("01-Jan-%d is %s\n", year, names[dayIndex]);
    return 0;
}
