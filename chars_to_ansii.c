#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("main.c", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        exit(1);
    }

    unsigned char bytes[sizeof(char)];

    while ((ch = fgetc(file)) != EOF) {
        printf("%c >> %d >> ", ch, (int) ch);
        unsigned char bytes[2] = {ch, 0};

        // Print the bit representation of each byte
        for (int i = 0; i < 2; i++) {
            for (int j = 7; j >= 0; j--) {
                printf("%d", (bytes[i] >> j) & 1);
            }
            printf(" ");
        }
        printf("\n");
    }

    fclose(file);
    return 0;
}
