#include <stdio.h>

int main() {
    FILE *src = fopen("a.txt", "r");
    FILE *dest = fopen("b.txt", "a");
    char c;

    while ((c = fgetc(src)) != EOF)
        fputc(c, dest);

    printf("Appended.\n");
    return 0;
}
