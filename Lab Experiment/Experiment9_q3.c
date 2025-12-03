#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("file not found.\n");
        return 1;
    }

    printf("file content:\n");
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
}
