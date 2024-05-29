#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *file;
    char *filename = (argc != 2) ? "hello.c" : argv[1];
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
