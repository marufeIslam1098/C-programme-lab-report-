#include <stdio.h>

int main() {
    FILE *src = fopen("input.txt", "r");
    FILE *dst = fopen("output.txt", "w");

    if (!src || !dst) {
        printf("Error opening files.\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dst);

    fclose(src);
    fclose(dst);

    printf("Content written successfully.\n");
    return 0;
}
