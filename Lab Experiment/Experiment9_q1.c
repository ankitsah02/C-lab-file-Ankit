#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("output.txt", "w");

    if (fp == NULL) {
        printf("Unable to create file.\n");
        return 1;
    }

    printf("Enter text to store in file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);
    fclose(fp);
    printf("file created and text written successfully.\n");
    return 0;
}
