#include <stdio.h>

int words(FILE *fp);

int main(int argc, char const *argv[]) {
    if (argc != 2) {
        printf("Wrong usage\n");
        printf("Usage: ./countword filename\n");
        return -1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Cannot open file %s\n", argv[1]);
        return -2;
    }

    printf("Number of words: %d\n", words(fp));

    fclose(fp);

    return 0;
}

int words(FILE *fp) {
    char word[100];
    int count = 0;
    while (!feof(fp)) {
        fscanf(fp, "%s", word);
        count++;
    }
    return count;
}