#include <stdio.h>
#include <zip.h>

int main() {
    int err = 0;
    struct zip *z = zip_open("files.zip", 0, &err);

    if (!z) {
        printf("Cannot open zip file.\n");
        return 1;
    }

    zip_int64_t count = zip_get_num_entries(z, 0);
    printf("Total files: %lld\n", (long long)count);

    for (zip_int64_t i = 0; i < count; i++) {
        const char *name = zip_get_name(z, i, 0);
        printf("File: %s\n", name);

        struct zip_file *zf = zip_fopen_index(z, i, 0);
        if (!zf) continue;

        char buffer[256];
        zip_int64_t n;
        while ((n = zip_fread(zf, buffer, sizeof(buffer))) > 0)
            fwrite(buffer, 1, n, stdout);

        zip_fclose(zf);
        printf("\n--------------------\n");
    }

    zip_close(z);
    return 0;
}
