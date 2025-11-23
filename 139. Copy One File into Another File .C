#include <stdio.h>

int main() {
    FILE *src = fopen("source.txt", "r");
    FILE *dst = fopen("copy.txt", "w");

    char ch;
    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dst);

    fclose(src);
    fclose(dst);

    printf("File copied.\n");
    return 0;
}
