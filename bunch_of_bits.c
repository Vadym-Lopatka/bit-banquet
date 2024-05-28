#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "hello.c";
    int ch;

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        printf("%c >> %d >> ", ch, ch);

        for (int i = 7; i >= 0; i--) {
            printf("%d", (ch >> i) & 1);
        }

        printf("\n");
    }

    fclose(file);
    return 0;
}
