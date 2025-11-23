#include <stdio.h>

int main() {
    FILE *src = fopen("source.txt", "r");
    FILE *dst = fopen("target.txt", "a");

    if (!src || !dst) {
        printf("File open error!\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dst);

    fclose(src);
    fclose(dst);

    printf("Content appended successfully.\n");
    return 0;
}
