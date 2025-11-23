#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("text.txt", "r");
    char line[500];
    char pat[50] = "abc";

    while (fgets(line, sizeof(line), fp)) {
        if (strstr(line, pat))
            printf("%s", line);
    }
    fclose(fp);
    return 0;
}
