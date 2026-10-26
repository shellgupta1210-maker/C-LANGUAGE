#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source_file, *dest_file;
    char source_path[260], dest_path[260];
    int ch;

    // 1. Get the source filename from the user
    printf("Enter the source file name/path: ");
    if (scanf("%259s", source_path) != 1) {
        printf("Error reading source filename.\n");
        return 1;
    }

    // 2. Open the source file in read mode
    source_file = fopen(source_path, "r");
    if (source_file == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // 3. Get the destination filename from the user
    printf("Enter the destination file name/path: ");
    if (scanf("%259s", dest_path) != 1) {
        printf("Error reading destination filename.\n");
        fclose(source_file);
        return 1;
    }

    // 4. Open the destination file in write mode
    dest_file = fopen(dest_path, "w");
    if (dest_file == NULL) {
        perror("Error opening destination file");
        fclose(source_file);
        return 1;
    }

    // 5. Copy content character by character using fgetc() and fputc()
    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, dest_file);
    }

    printf("File copied successfully from '%s' to '%s'.\n", source_path, dest_path);

    // 6. Close both file pointers to free resources
    fclose(source_file);
    fclose(dest_file);

    return 0;
}
